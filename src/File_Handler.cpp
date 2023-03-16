#include <File_Handler.hpp>

using namespace std;

File_Handler::File_Handler()
{
    ifstream f;
    f.open("./bin/data/file_list", ios::in);
    if (f.is_open())
    {
        string temp;
        while(getline(f, temp))
        {
            file_list.push_back(temp);
        }
        f.close();
    }
    
}

File_Handler::~File_Handler()
{}

std::vector<std::string> File_Handler::get_file_list()
{
    return file_list;
}