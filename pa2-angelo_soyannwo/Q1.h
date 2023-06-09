
#ifndef Q1_H
#define Q1_H
#include <fstream>

extern const int ENTRIES;
extern int COUNT;


void get_parameters();
void get_command_code(char * var);
void execute_command(char command);
void execute_command(char command, const char * command_file, int lines_to_skip);
void execute_command(char command, std::ofstream &file);
void execute_command(char command, const char * command_file, int lines_to_skip, std::ofstream &write_file);
char normalize_input(char letter);
void simulator();


#endif
