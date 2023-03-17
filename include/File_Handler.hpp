#ifndef FILE_HANDLER
#define FILE_HANDLER

#include <string>
#include <fstream>

#include <File_Decryptor.hpp>


/*
Struct made to store a list of strings and the number of strings there is in it
Used to communicate data read from a file
*/
typedef struct string_list
{
    std::string* list;
    unsigned number_lines; 
} string_list;


void destroy_list(string_list list);

/*
Class made to be an iterface between the game and files
*/
class File_Handler
{
private:
    string_list* list_of_files;

    File_Decryptor decryptor;

    string_list* read_file(std::string filename);
    int number_of_lines(std::string filename);

    int write_file(std::string filename, std::string* list);
public:
    File_Handler();
    ~File_Handler();

    string_list* get_file_list();
};

#endif