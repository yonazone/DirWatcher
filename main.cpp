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
  std::string pathToWatch;
};
