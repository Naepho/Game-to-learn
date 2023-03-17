#include <File_Handler.hpp>

// Gets list of files
File_Handler::File_Handler()
{
    list_of_files = read_file("./bin/data/file_list");
}

File_Handler::~File_Handler()
{
    destroy_list(list_of_files)
} 

// Destroys a string_list allocated manually
void destroy_list(string_list* list)
{
    delete[] list->list;
    delete list;
}

// Private functions

// Returns the number of lines of a file
int File_Handler::number_of_lines(std::string filename)
{
    int number_of_lines = 0;

    std::ifstream f;
    f.open(filename, std::ios::in);
    if (f.is_open())
    {
        std::string line;
        while (std::getline(f, line))
            number_of_lines++;
    }

    return number_of_lines;
}

// Reads a file to a string_list
string_list* File_Handler::read_file(std::string filename)
{
    list* = new string_list;
    list->number_lines = number_of_lines(filename);
    list->list = new std::string[list.number_lines];

    std::ifstream f;
    f.open(filename, std::ios::in);
    if (f.is_open())
    {
        std::string temp;
        for (int i = 0; i < list->number_lines; i++)
            getline(f, list->list[i]);
        
        f.close();
        return list;
    }
    else
    {
        throw("Couldn't open file " + filename);
    }
    
}

// Writes a string_list to a file
int File_Handler::write_file(std::string filename, string_list* list)
{
    std::ofstream f;
    f.open(filename, std::ios::out);
    if (!f.is_open())
    {
        return -1;
    }
    else
    {
        for (size_t i = 0; i < list->number_lines; i++)
        {
            f << list->list[i] << std::endl;
        }
        
        return 0;
    }
    
}

// Public functions

// Returns the file_list
std::string* File_Handler::get_file_list()
{
    return list_of_files;
}