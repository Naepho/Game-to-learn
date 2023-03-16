#ifndef FILE_HANDLER
#define FILE_HANDLER

#include <string>
#include <iostream>
#include <fstream>
#include <vector>

class File_Handler
{
private:
    std::vector<std::string> file_list;
public:
    File_Handler();
    ~File_Handler();

    std::vector<std::string> get_file_list();
};

#endif