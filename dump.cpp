#include "allheader.h"

// Basicall a funcion to check wheher a 'file' is director and subiterate over it since the function 'directoriterator' wont check the subdirectories
//  using vector data structure to store the path (file names)
// Funcion name is "itDir" stands for iterate directtor
void itDir(const std::filesystem::path& Dir)
{
    //std::vector<std::filesystem::path&> temp;
    while (Dir.type() == file_type::directory)
    {
        for (auto const& dir_entry : std::filesystem::directory_iterator{Dir})
        {
            std::cout << dir_entry.path() << std::endl;

        }
    }

}

const std::vector<std::filesystem::path&> itDir(const std::filesystem::path& Dir)
{
    std::vector<std::filesystem::path&> temp;
    while (Dir.type() == file_type::directory)
    {
        for (auto const& dir_entry : std::filesystem::directory_iterator{Dir})
        {
            // temp[i] = dir_entry.path();
            temp.push_back(dir_entry.path());
        }
    }
    return temp;
}