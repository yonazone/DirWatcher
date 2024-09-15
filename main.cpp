#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <chrono>
#include <sstream>
#include <filesystem>
#include <thread>
#include <condition_variable>
#include <mutex>
#include <unordered_map>
#include <format>

class DirWatcher
{
private:
  const std::string& pathToWatch;
  //std::filesystem::path& file;
  std::vector<const std::filesystem::path&> mfile;

public: // CONSTRUCTORS
  DirWatcher(const std::string& _pathToWatch) // maybe add one more, time to monitor (chrono)
    : pathToWatch(_pathToWatch)
  {
    // Maybe display all the files with their corresponding extension(type), date created, last modified and all these details
    for (std::size_t i = 0u; i < number_of_files_in_directory(pathToWatch); ++i)
    {
      // Iterating throughout the given directory and printing the file name and extension
      std::cout << mfile[i] << mfile[i].extension() << std::endl;
    }
  }

public: // MEMBER FUNCTIONS
  std::size_t number_of_files_in_directory(std::filesystem::path path)
  {
    std::size_t number_of_files = 0u;
    for (auto const& file : std::filesystem::directory_iterator(path))
    {
      mfile.push_back(file);
      ++number_of_files;
    }
    return number_of_files;
  }
};

int main()
{
  // Btw the command used to log error messages to error.log is
  // g++ main.cpp -o main 2> error.log

  // --------ENTER CODE HERE--------

  return 0;
}