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

class DirWatcher
{
private:
  const std::string& pathToWatch;

public: // CONSTRUCTORS
  DirWatcher(const std::string& _pathToWatch) // maybe add one more, time to monitor (chrono)
    : pathToWatch(_pathToWatch)
  {
    // Maybe display all the files with their corresponding extension(type), date created, last modified and all these details
  }

public: // MEMBER FUNCTIONS
};
