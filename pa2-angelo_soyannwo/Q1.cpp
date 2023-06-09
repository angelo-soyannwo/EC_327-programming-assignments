
#include "pa2Functions.h"
#include <iostream>
#include <fstream>
#include "Q1.h"


char normalize_input(char letter);
void execute_command();
void simulator();
void get_command_code(char * var);
void execute_command(char command, const char * command_file, int lines_to_skip);
void execute_command(char command, const char * command_file, int lines_to_skip, std::ofstream &write_file);
void get_parameters();
void execute_command(char command, const char* write_file);

extern const int ENTRIES = 10;
extern int COUNT = 0;

int main(){

	initialize();
	simulator();


	return 0;
}

void get_parameters(){
	//A simple function to print out the text for collecting parameters.
	std::cout<<"Please enter parameters: ";
}

void get_command_code(char * var){
	//A function that prints out the below text and reads the command into the memory location of the pointer to var.
	std::cout<<"Please enter a command code: ";
	std::cin>>var;
}

void simulator(){
	// This is the simulator that performs the given functions. 
	char command_code;

	while (COUNT<ENTRIES){
		fflush(stdin);
		get_command_code(&command_code);

		if (checkCode(command_code)){
			command_code = normalize_input(command_code);

			if (command_code == 'Q'){
				break;
			}
			else{
				execute_command(command_code);
			}
			
		}
	COUNT++;
	}

}

char normalize_input(char letter){
	//normalizes input letter to the capital of whatever the letter is

	int val = (int) letter;

	if ((val>64) && (val<91)){
		return letter;
	}

	else if ((val>96) && (val<123)){
		char result = (char) (val-32);
		return result;
	}
	return '\0';
}

void execute_command(char command){

	int param_1, param_2, param_3;
	char param_4;
	double first, last, delta, i=0;
	const char * filename;
	std::string str;
	switch(command){
		
		case 'F':
			get_parameters();
			std::cin>>param_1;
			std::cout<< "factorial(" << param_1 << ") = " << factorial(param_1)<<std::endl;
			break;
		case 'B':
			get_parameters();
			std::cin>>param_1;
			std::cout<< "fibonacci(" << param_1 << ") = " << fibonacci(param_1)<<std::endl;
			break;
		case 'R':
			get_parameters();
			std::cin>>first; std::cin>>last; std::cin>>delta;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i 
					std::cout<<"findSqrtValue("<<last<<") = "<<findSqrtValue(last)<<std::endl;
					break;
				}
				std::cout<<"findSqrtValue("<<first+i<<") = "<<findSqrtValue(first+i)<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i 
					std::cout<<"findSqrtValue("<<last<<") = "<<findSqrtValue(last)<<std::endl;
					break;
				}
			}
			break;
		case 'U':
			get_parameters();
			std::cin>>first; std::cin>>last; std::cin>>delta;
			while((first+i) <= last) {
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"areaSquare("<<last<<") = "<<areaSquare(last)<<std::endl;
					break;
				}
				std::cout<<"areaSquare("<<first+i<<") = "<<areaSquare(first+i)<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"areaSquare("<<last<<") = "<<areaSquare(last)<<std::endl;
					break;
				}
			}
			break;
		case 'C':
			get_parameters();
			std::cin>>first; std::cin>>last; std::cin>>delta;
			while((first+i) <= last){ //edge case for last<first+i
				if((first+i)>last) {
					std::cout<<"areaCircle("<<last<<") = "<<areaCircle(last)<<std::endl;
					break;
				}
				std::cout<<"areaCircle("<<first+i<<") = "<<areaCircle(first+i)<<std::endl;
				i+=delta;
				if((first+i)>last) {
					std::cout<<"areaCircle("<<last<<") = "<<areaCircle(last)<<std::endl;
					break;
				}
			}
			break;
		case 'E':
			get_parameters();
			std::cin>>param_1; std::cin>>param_2;
			std::cout<<"findNextEvenValue("<<param_1<<") = "<<findNextEvenValue(param_1)<<std::endl;
			std::cout<<"findNextEvenValue("<<param_2<<") = "<<findNextEvenValue(param_2)<<std::endl;
			break;


		case 'K':
			get_parameters();
			std::cin>>first; std::cin>>last; std::cin>>delta;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"lucky("<<last<<") = "<<lucky(last)<<std::endl;
					break;
				}
				std::cout<<"lucky("<<first+i<<") = "<<lucky(first+i)<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"lucky("<<last<<") = "<<lucky(last)<<std::endl;
					break;
				}
			}	
			break;
		case 'S':
			get_parameters();
			std::cin>>first; std::cin>>last; std::cin>>delta;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"sine("<<last<<") = "<<doMath(last, 'S')<<std::endl;
					break;
				}
				std::cout<<"sine("<<first+i<<") = "<<doMath(first+i, 'S')<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"sine("<<last<<") = "<<doMath(last, 'S')<<std::endl;
					break;
				}
			}
			break;
		case 'N':
			get_parameters();
			std::cin>>first; std::cin>>last; std::cin>>delta;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"cosine("<<last<<") = "<<doMath(last, 'N')<<std::endl;
					break;
				}
				std::cout<<"cosine("<<first+i<<") = "<<doMath(first+i, 'N')<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"cosine("<<last<<") = "<<doMath(last, 'N')<<std::endl;
					break;
				}
			}
			break;

		case 'X':
			get_parameters();
			std::cin>>first; std::cin>>last; std::cin>>delta;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"exponential("<<last<<") = "<<doMath(last, 'X')<<std::endl; 
					break;
				}
				std::cout<<"exponential("<<first+i<<") = "<<doMath(first+i, 'X')<<std::endl; // Need to do formatting for everything below this line
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"exponential("<<last<<") = "<<doMath(last, 'X')<<std::endl; 
					break;
				}
			}
			break;
		case 'L':
			get_parameters();
			std::cin>>first; std::cin>>last; std::cin>>delta;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"naturalLog("<<last<<") = "<<doMath(last, 'L')<<std::endl;
					break;
				}
				std::cout<<"naturalLog("<<first+i<<") = "<<naturalLog(first+i)<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"naturalLog("<<last<<") = "<<doMath(last, 'L')<<std::endl;
					break;
				}
			}
			break;
		case 'Y':
			get_parameters();
			std::cin>>first; std::cin>>last; std::cin>>delta;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"NyanCatValue("<<last<<") = "<< findNyanCatValue(last)<<std::endl;
					break;
				}
				std::cout<<"NyanCatValue("<<first+i<<") = "<< findNyanCatValue(first+i)<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"NyanCatValue("<<last<<") = "<< findNyanCatValue(last)<<std::endl;
					break;
				}
			}
			break;
		case 'D':
			get_parameters();
			std::cin>>param_1; std::cin>>param_2;
			std::cout<<"NextOddValue("<<param_1<<") = "<< findNextOddValue(param_1)<<std::endl;
			std::cout<<"NextOddValue("<<param_2<<") = "<< findNextOddValue(param_2)<<std::endl;
			break;


		case 'I':
			get_parameters();
			std::cin>>str;
			filename = str.c_str();
			readDataFromFile(filename);
			break;
		case 'O':
			get_parameters();
			std::cin>>str;
			filename = str.c_str();
			std::cout<<"All of the following program output will be written to the given file"<<std::endl;
			writeDataToFile(filename);
			break;
		default:
			break;
	}
}

//Reading commands from file
void execute_command(char command, const char * command_file, int lines_to_skip){

	int param_1, param_2, param_3;
	char param_4;
	double first, last, delta, i=0;
	std::ifstream file;
	file.open(command_file);
	const char * filename;
	std::string str, garbage_string;

	for(int j=0; j<lines_to_skip; j++){ getline(file, garbage_string);}

	switch(command){
		
		case 'F':
			get_parameters();
			file>>param_1;
			std::cout<< param_1 << std::endl;
			std::cout<< "factorial(" << param_1 << ") = " << factorial(param_1)<<std::endl;
			break;
		case 'B':
			get_parameters();
			file>>param_1;
			std::cout<< "fibonacci(" << param_1 << ") = " << fibonacci(param_1)<<std::endl;
			break;
		case 'R':
			get_parameters();
			file>>first; file>>last; file>>delta;
			while((first+i) <= last){
				if((first+i)>last) {
					std::cout<<"findSqrtValue("<<last<<") = "<<findSqrtValue(last)<<std::endl;
					break;
				}
				std::cout<<findSqrtValue(param_1+i)<<std::endl;
				 i+=delta;
				if((first+i)>last) {
					std::cout<<"findSqrtValue("<<last<<") = "<<findSqrtValue(last)<<std::endl;
					break;
				}
			}
			break;
		case 'U':
			get_parameters();
			file>>first; file>>last; file>>delta;
			while((first+i) <= last) {
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"areaSquare("<<last<<") = "<<areaSquare(last)<<std::endl;
					break;
				}
				std::cout<<areaSquare(param_1+i)<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"areaSquare("<<last<<") = "<<areaSquare(last)<<std::endl;
					break;
				}
			}
			break;
		case 'C':
			get_parameters();
			file>>first; file>>last; file>>delta;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"areaCircle("<<last<<") = "<<areaCircle(last)<<std::endl;
					break;
				}
				std::cout<<areaCircle(param_1+i)<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"areaCircle("<<last<<") = "<<areaCircle(last)<<std::endl;
					break;
				}
			}
			break;
		case 'E':
			get_parameters();
			file>>param_1; file>>param_2;
			std::cout<<findNextEvenValue(param_1)<<std::endl;
			std::cout<<findNextEvenValue(param_2)<<std::endl;
			break;


		case 'K':
			get_parameters();
			file>>first; file>>last; file>>delta;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"lucky("<<last<<") = "<<lucky(last)<<std::endl;
					break;
				}
				std::cout<<lucky(first+i)<<std::endl;
				std::cout<<"lucky("<<first+i<<") = "<<lucky(first+i)<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"lucky("<<last<<") = "<<lucky(last)<<std::endl;
					break;
				}
			}	
			break;
		case 'S':
			get_parameters();
			file>>first; file>>last; file>>delta;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"sine("<<last<<") = "<<doMath(last, 'S')<<std::endl;
					break;
				}
				std::cout<<doMath(first+i, 'S')<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"sine("<<last<<") = "<<doMath(last, 'S')<<std::endl;
					break;
				}
			}
			break;
		case 'N':
			get_parameters();
			file>>first; file>>last; file>>delta;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"cosine("<<last<<") = "<<doMath(last, 'N')<<std::endl;
					break;
				}
				std::cout<<doMath(first+i, 'N')<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"cosine("<<last<<") = "<<doMath(last, 'N')<<std::endl;
					break;
				}
			}
			break;

		case 'X':
			get_parameters();
			file>>first; file>>last; file>>delta;
			std::cout<<first<<" "<<last<<" "<<delta<<std::endl;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"exponential("<<last<<") = "<<doMath(last, 'X')<<std::endl; 
					break;
				}
				std::cout<<"exponential("<<first+i<<") = "<<doMath(first+i, 'X')<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"exponential("<<last<<") = "<<doMath(last, 'X')<<std::endl; 
					break;
				}
			}
			break;
		case 'L':
			get_parameters();
			file>>first; file>>last; file>>delta;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"naturalLog("<<last<<") = "<<doMath(last, 'L')<<std::endl;
					break;
				}
				std::cout<<naturalLog(param_3)<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"naturalLog("<<last<<") = "<<doMath(last, 'L')<<std::endl;
					break;
				}
			}
			break;
		case 'Y':
			get_parameters();
			file>>first; file>>last; file>>delta;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"NyanCatValue("<<last<<") = "<< findNyanCatValue(last)<<std::endl;
					break;
				}
				std::cout<<findNyanCatValue(param_3)<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"NyanCatValue("<<last<<") = "<< findNyanCatValue(last)<<std::endl;
					break;
				}
			}
			break;
		case 'D':
			get_parameters();
			file>>param_1; file>>param_2;
			std::cout<<findNextOddValue(param_1)<<std::endl;
			std::cout<<findNextOddValue(param_2)<<std::endl;
			break;


		case 'I':
			get_parameters();
			std::cin>>str;
			filename = str.c_str();
			readDataFromFile(filename);
			break;
		case 'O':
			get_parameters();
			std::cin>>str;
			filename = str.c_str();
			std::cout<<"All of the following program output will be written to the given file"<<std::endl;
			writeDataToFile(filename);
			break;
		default:
			break;
	}
}
//Overloaded execut command for writing Data to a specified file command
void execute_command(char command, std::ofstream &file){

	int param_1, param_2, param_3;
	char param_4;
	double first, last, delta, i=0;
	const char * filename;
	std::string str;


	switch(command){
		
		case 'F':
			get_parameters();
			std::cin>>param_1;
			std::cout<< "factorial(" << param_1 << ") = " << factorial(param_1)<<std::endl;
			file<<"factorial(" << param_1 << ") = " << factorial(param_1)<<std::endl;
			break;
		case 'B':
			get_parameters();
			std::cin>>param_1;
			std::cout<< "fibonacci(" << param_1 << ") = " << fibonacci(param_1)<<std::endl;
			file<<"fibonacci(" << param_1 << ") = " << fibonacci(param_1)<<std::endl;
			break;
		case 'R':
			get_parameters();
			std::cin>>first; std::cin>>last; std::cin>>delta;
			while((first+i) <= last){
				if((first+i)>last) {
					std::cout<<"findSqrtValue("<<last<<") = "<<findSqrtValue(last)<<std::endl;
					file<<"findSqrtValue("<<last<<") = "<<findSqrtValue(last)<<std::endl;
					break;
				}
				std::cout<<"findSqrtValue("<<first+i<<") = "<<findSqrtValue(first+i)<<std::endl;
				file<<"findSqrtValue("<<first+i<<") = "<<findSqrtValue(first+i)<<std::endl;
				i+=delta;
				if((first+i)>last) {
					std::cout<<"findSqrtValue("<<last<<") = "<<findSqrtValue(last)<<std::endl;
					file<<"findSqrtValue("<<last<<") = "<<findSqrtValue(last)<<std::endl;
					break;
				}
			}
			break;
		case 'U':
			get_parameters();
			std::cin>>first; std::cin>>last; std::cin>>delta;
			while((first+i) <= last) {
				if((first+i)>last) {
					std::cout<<"areaSquare("<<last<<") = "<<areaSquare(last)<<std::endl;
					file<<"areaSquare("<<last<<") = "<<areaSquare(last)<<std::endl;
					break;
				}
				std::cout<<"areaSquare("<<first+i<<") = "<<areaSquare(first+i)<<std::endl;
				file<<"areaSquare("<<first+i<<") = "<<areaSquare(first+i)<<std::endl;
				i+=delta;
				if((first+i)>last) {
					std::cout<<"areaSquare("<<last<<") = "<<areaSquare(last)<<std::endl;
					file<<"areaSquare("<<last<<") = "<<areaSquare(last)<<std::endl;
					break;
				}
			}
			break;
		case 'C':
			get_parameters();
			std::cin>>first; std::cin>>last; std::cin>>delta;
			while((first+i) <= last){
				if((first+i)>last) {
					std::cout<<"areaCircle("<<last<<") = "<<areaCircle(last)<<std::endl;
					file<<"areaCircle("<<last<<") = "<<areaCircle(last)<<std::endl;
					break;
				}
				std::cout<<"areaCircle("<<first+i<<") = "<<areaCircle(first+i)<<std::endl;
				file<<"areaCircle("<<last<<") = "<<areaCircle(last)<<std::endl;
				i+=delta;
				if((first+i)>last) {
					std::cout<<"areaCircle("<<last<<") = "<<areaCircle(last)<<std::endl;
					file<<"areaCircle("<<last<<") = "<<areaCircle(last)<<std::endl;
					break;
				}
			}
			break;
		case 'E':
			get_parameters();
			std::cin>>param_1; std::cin>>param_2;

			std::cout<<"findNextEvenValue("<<param_1<<") = "<<findNextEvenValue(param_1)<<std::endl;
			file<<"findNextEvenValue("<<param_1<<") = "<<findNextEvenValue(param_1)<<std::endl;

			std::cout<<"findNextEvenValue("<<param_2<<") = "<<findNextEvenValue(param_2)<<std::endl;
			file<<"findNextEvenValue("<<param_2<<") = "<<findNextEvenValue(param_2)<<std::endl;
			break;


		case 'K':
			get_parameters();
			std::cin>>first; std::cin>>last; std::cin>>delta;
			while((first+i) <= last){
				if((first+i)>last) {
					std::cout<<"lucky("<<last<<") = "<<lucky(last)<<std::endl; 
					file<<"lucky("<<last<<") = "<<lucky(last)<<std::endl; 
					break;

				}
				std::cout<<"lucky("<<first+i<<") = "<<lucky(first+i)<<std::endl;
				file<<"lucky("<<first+i<<") = "<<lucky(first+i)<<std::endl;
				i+=delta;

				if((first+i)>last) {
					std::cout<<"lucky("<<last<<") = "<<lucky(last)<<std::endl; 
					file<<"lucky("<<last<<") = "<<lucky(last)<<std::endl; 
					break;
				}

			}	
			break;
		case 'S':
			get_parameters();
			std::cin>>first; std::cin>>last; std::cin>>delta;
			while((first+i) <= last){
				if((first+i)>last) {
					std::cout<<"sine("<<last<<") = "<<doMath(last, 'S')<<std::endl;
					file<<"sine("<<last<<") = "<<doMath(last, 'S')<<std::endl;
					break;
				}
				std::cout<<"sine("<<first+i<<") = "<<doMath(first+i, 'S')<<std::endl;
				file<<"sine("<<first+i<<") = "<<doMath(first+i, 'S')<<std::endl;
				i+=delta;
				if((first+i)>last) {
					std::cout<<"sine("<<last<<") = "<<doMath(last, 'S')<<std::endl;
					file<<"sine("<<last<<") = "<<doMath(last, 'S')<<std::endl;
					break;
				}
			}
			break;
		case 'N':
			get_parameters();
			std::cin>>first; std::cin>>last; std::cin>>delta;
			while((first+i) <= last){
				if((first+i)>last) {
					std::cout<<"cosine("<<last<<") = "<<doMath(last, 'N')<<std::endl;
					file<<"cosine("<<last<<") = "<<doMath(last, 'N')<<std::endl;
					break;
				}
				std::cout<<"cosine("<<first+i<<") = "<<doMath(first+i, 'N')<<std::endl;
				file<<"cosine("<<first+i<<") = "<<doMath(first+i, 'N')<<std::endl;
				i+=delta;
				if((first+i)>last) {
					std::cout<<"cosine("<<last<<") = "<<doMath(last, 'N')<<std::endl;
					file<<"cosine("<<last<<") = "<<doMath(last, 'N')<<std::endl;
					break;
				}
			}
			break;

		case 'X':
			get_parameters();
			std::cin>>first; std::cin>>last; std::cin>>delta;
			while((first+i) <= last){
				if((first+i)>last) {
					std::cout<<"exponential("<<last<<") = "<<doMath(last, 'X')<<std::endl; 
					file<<"exponential("<<last<<") = "<<doMath(last, 'X')<<std::endl; 
					break;
				}

				std::cout<<"exponential("<<first+i<<") = "<<doMath(first+i, 'X')<<std::endl; // Need to do formatting for everything below this line
				file<<"exponential("<<first+i<<") = "<<doMath(first+i, 'X')<<std::endl;
				i+=delta;
				if((first+i)>last) {
					std::cout<<"exponential("<<last<<") = "<<doMath(last, 'X')<<std::endl; 
					file<<"exponential("<<last<<") = "<<doMath(last, 'X')<<std::endl; 
					break;
				}
			}
			break;
		case 'L':
			get_parameters();
			std::cin>>first; std::cin>>last; std::cin>>delta;
			while((first+i) <= last){
				if((first+i)>last) {
					std::cout<<"naturalLog("<<last<<") = "<<doMath(last, 'L')<<std::endl;
					file<<"naturalLog("<<last<<") = "<<doMath(last, 'L')<<std::endl;
					break;
				}
				std::cout<<"naturalLog("<<first+i<<") = "<<naturalLog(first+i)<<std::endl;
				file<<"naturalLog("<<first+i<<") = "<<naturalLog(first+i)<<std::endl;
				i+=delta;
				if((first+i)>last) {
					std::cout<<"naturalLog("<<last<<") = "<<doMath(last, 'L')<<std::endl;
					file<<"naturalLog("<<last<<") = "<<doMath(last, 'L')<<std::endl;
					break;
				}
			}
			break;
		case 'Y':
			get_parameters();
			std::cin>>first; std::cin>>last; std::cin>>delta;
			while((first+i) <= last){
				if((first+i)>last) {
					std::cout<<"NyanCatValue("<<last<<") = "<< findNyanCatValue(last)<<std::endl;
					file<<"NyanCatValue("<<last<<") = "<< findNyanCatValue(last)<<std::endl;
					break;
				}
				std::cout<<"NyanCatValue("<<first+i<<") = "<< findNyanCatValue(first+i)<<std::endl;
				file<<"NyanCatValue("<<first+i<<") = "<< findNyanCatValue(first+i)<<std::endl;
				i+=delta;
				if((first+i)>last) {
					std::cout<<"NyanCatValue("<<last<<") = "<< findNyanCatValue(last)<<std::endl;
					file<<"NyanCatValue("<<last<<") = "<< findNyanCatValue(last)<<std::endl;
					break;
				}
			}
			break;
		case 'D':
			get_parameters();
			std::cin>>param_1; std::cin>>param_2;
			std::cout<<"NextOddValue("<<param_1<<") = "<< findNextOddValue(param_1)<<std::endl;
			file<<"NextOddValue("<<param_1<<") = "<< findNextOddValue(param_1)<<std::endl;
			std::cout<<"NextOddValue("<<param_2<<") = "<< findNextOddValue(param_2)<<std::endl;
			file<<"NextOddValue("<<param_2<<") = "<< findNextOddValue(param_2)<<std::endl;
			break;


		case 'I':
			get_parameters();
			std::cin>>str;
			filename = str.c_str();
			readDataFromFile(filename, file);
			break;
		case 'O':
			get_parameters();
			std::cin>>str;
			filename = str.c_str();
			std::cout<<"All of the following program output will be written to the given file"<<std::endl;
			writeDataToFile(filename);
			break;
		default:
			break;

	}

}

//Edge case For Reading commands from file and outputting results to a specified file

void execute_command(char command, const char * command_file, int lines_to_skip, std::ofstream &write_file){

	int param_1, param_2, param_3;
	char param_4;
	double first, last, delta, i=0;
	std::ifstream file;
	file.open(command_file);
	const char * filename;
	std::string str, garbage_string;

	for(int j=0; j<lines_to_skip; j++){ getline(file, garbage_string);}

	switch(command){
		
		case 'F':
			get_parameters();
			file>>param_1;
			std::cout<< param_1 << std::endl;
			std::cout<< "factorial(" << param_1 << ") = " << factorial(param_1)<<std::endl;
			write_file<<"factorial(" << param_1 << ") = " << factorial(param_1)<<std::endl;
			break;
		case 'B':
			get_parameters();
			file>>param_1;
			std::cout<<param_1<<std::endl;
			std::cout<< "fibonacci(" << param_1 << ") = " << fibonacci(param_1)<<std::endl;
			write_file<< "fibonacci(" << param_1 << ") = " << fibonacci(param_1)<<std::endl;
			break;
		case 'R':
			get_parameters();
			file>>first; file>>last; file>>delta;
			std::cout<<first<<" "<<last<<" "<<delta<<std::endl;
			while((first+i) <= last){
				if((first+i)>last) {
					std::cout<<"findSqrtValue("<<last<<") = "<<findSqrtValue(last)<<std::endl;
					write_file<<"findSqrtValue("<<last<<") = "<<findSqrtValue(last)<<std::endl;
					break;
				}
				std::cout<<"findSqrtValue("<<first+i<<") = "<<findSqrtValue(first+i)<<std::endl;
				write_file<<"findSqrtValue("<<first+i<<") = "<<findSqrtValue(first+i)<<std::endl;
				 i+=delta;
				if((first+i)>last) {
					std::cout<<"findSqrtValue("<<last<<") = "<<findSqrtValue(last)<<std::endl;
					write_file<<"findSqrtValue("<<last<<") = "<<findSqrtValue(last)<<std::endl;
					break;
				}
			}
			break;
		case 'U':
			get_parameters();
			file>>first; file>>last; file>>delta;
			std::cout<<first<<" "<<last<<" "<<delta<<std::endl;
			while((first+i) <= last) {
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"areaSquare("<<last<<") = "<<areaSquare(last)<<std::endl;
					write_file<<"areaSquare("<<last<<") = "<<areaSquare(last)<<std::endl;
					break;
				}
				std::cout<<"areaSquare("<<first+i<<") = "<<areaSquare(first+i)<<std::endl;
				write_file<<"areaSquare("<<first+i<<") = "<<areaSquare(first+i)<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"areaSquare("<<last<<") = "<<areaSquare(last)<<std::endl;
					write_file<<"areaSquare("<<last<<") = "<<areaSquare(last)<<std::endl;
					break;
				}
			}
			break;
		case 'C':
			get_parameters();
			file>>first; file>>last; file>>delta;
			std::cout<<first<<" "<<last<<" "<<delta<<std::endl;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"areaCircle("<<last<<") = "<<areaCircle(last)<<std::endl;
					write_file<<"areaCircle("<<last<<") = "<<areaCircle(last)<<std::endl;
					break;
				}
				std::cout<<"areaCircle("<<first+i<<") = "<<areaCircle(first+i)<<std::endl;
				write_file<<"areaCircle("<<first+i<<") = "<<areaCircle(first+i)<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"areaCircle("<<last<<") = "<<areaCircle(last)<<std::endl;
					write_file<<"areaCircle("<<last<<") = "<<areaCircle(last)<<std::endl;
					break;
				}
			}
			break;
		case 'E':
			get_parameters();
			file>>param_1; file>>param_2;
			std::cout<<param_1<<" "<<param_2<<std::endl;
			std::cout<<"NextEvenValue("<<param_1<<") = "<< findNextEvenValue(param_1)<<std::endl;
			write_file<<"NextEvenValue("<<param_1<<") = "<< findNextEvenValue(param_1)<<std::endl;
			std::cout<<"NextEvenValue("<<param_2<<") = "<< findNextEvenValue(param_2)<<std::endl;
			write_file<<"NextEvenValue("<<param_2<<") = "<< findNextEvenValue(param_2)<<std::endl;
			break;


		case 'K':
			get_parameters();
			file>>first; file>>last; file>>delta;
			std::cout<<first<<" "<<last<<" "<<delta<<std::endl;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"lucky("<<last<<") = "<<lucky(last)<<std::endl;
					write_file<<"lucky("<<last<<") = "<<lucky(last)<<std::endl;
					break;
				}
				std::cout<<"lucky("<<first+i<<") = "<<lucky(first+i)<<std::endl;
				write_file<<"lucky("<<first+i<<") = "<<lucky(first+i)<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"lucky("<<last<<") = "<<lucky(last)<<std::endl;
					write_file<<"lucky("<<last<<") = "<<lucky(last)<<std::endl;
					break;
				}
			}	
			break;
		case 'S':
			get_parameters();
			file>>first; file>>last; file>>delta;
			std::cout<<first<<" "<<last<<" "<<delta<<std::endl;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"sine("<<last<<") = "<<doMath(last, 'S')<<std::endl;
					write_file<<"sine("<<last<<") = "<<doMath(last, 'S')<<std::endl;
					break;
				}
				std::cout<<"sine("<<first+i<<") = "<<doMath(first+i, 'S')<<std::endl;
				write_file<<"sine("<<first+i<<") = "<<doMath(first+i, 'S')<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"sine("<<last<<") = "<<doMath(last, 'S')<<std::endl;
					write_file<<"sine("<<last<<") = "<<doMath(last, 'S')<<std::endl;
					break;
				}
			}
			break;
		case 'N':
			get_parameters();
			file>>first; file>>last; file>>delta;
			std::cout<<first<<" "<<last<<" "<<delta<<std::endl;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"cosine("<<last<<") = "<<doMath(last, 'N')<<std::endl;
					write_file<<"cosine("<<last<<") = "<<doMath(last, 'N')<<std::endl;
					break;
				}
				std::cout<<"cosine("<<first+i<<") = "<<doMath(first+i, 'N')<<std::endl;
				write_file<<"cosine("<<first+i<<") = "<<doMath(first+i, 'N')<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"cosine("<<last<<") = "<<doMath(last, 'N')<<std::endl;
					write_file<<"cosine("<<last<<") = "<<doMath(last, 'N')<<std::endl;
					break;
				}
			}
			break;

		case 'X':
			get_parameters();
			file>>first; file>>last; file>>delta;
			std::cout<<first<<" "<<last<<" "<<delta<<std::endl;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"exponential("<<last<<") = "<<doMath(last, 'X')<<std::endl; 
					write_file<<"exponential("<<last<<") = "<<doMath(last, 'X')<<std::endl; 
					break;
				}
				std::cout<<"exponential("<<first+i<<") = "<<doMath(first+i, 'X')<<std::endl;
				write_file<<"exponential("<<first+i<<") = "<<doMath(first+i, 'X')<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"exponential("<<last<<") = "<<doMath(last, 'X')<<std::endl; 
					write_file<<"exponential("<<last<<") = "<<doMath(last, 'X')<<std::endl; 
					break;
				}
			}
			break;
		case 'L':
			get_parameters();
			file>>first; file>>last; file>>delta;
			std::cout<<first<<" "<<last<<" "<<delta<<std::endl;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"naturalLog("<<last<<") = "<<doMath(last, 'L')<<std::endl;
					write_file<<"naturalLog("<<last<<") = "<<doMath(last, 'L')<<std::endl;
					break;
				}
				std::cout<<"naturalLog("<<first+i<<") = "<<doMath(first+i, 'L')<<std::endl;
				write_file<<"naturalLog("<<first+i<<") = "<<doMath(first+i, 'L')<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"naturalLog("<<last<<") = "<<doMath(last, 'L')<<std::endl;
					write_file<<"naturalLog("<<last<<") = "<<doMath(last, 'L')<<std::endl;
					break;
				}
			}
			break;
		case 'Y':
			get_parameters();
			file>>first; file>>last; file>>delta;
			std::cout<<first<<" "<<last<<" "<<delta<<std::endl;
			while((first+i) <= last){
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"NyanCatValue("<<last<<") = "<< findNyanCatValue(last)<<std::endl;
					write_file<<"NyanCatValue("<<last<<") = "<< findNyanCatValue(last)<<std::endl;
					break;
				}
				std::cout<<"NyanCatValue("<<first+i<<") = "<< findNyanCatValue(first+i)<<std::endl;
				write_file<<"NyanCatValue("<<first+i<<") = "<< findNyanCatValue(first+i)<<std::endl;
				i+=delta;
				if((first+i)>last) { //edge case for last<first+i
					std::cout<<"NyanCatValue("<<last<<") = "<< findNyanCatValue(last)<<std::endl;
					write_file<<"NyanCatValue("<<last<<") = "<< findNyanCatValue(last)<<std::endl;
					break;
				}
			}
			break;
		case 'D':
			get_parameters();
			file>>param_1; file>>param_2;
			std::cout<<param_1<<" "<<param_2<<std::endl;
			std::cout<<findNextOddValue(param_1)<<std::endl;
			std::cout<<"NextOddValue("<<first+i<<") = "<<findNextOddValue(param_1)<<std::endl;
			write_file<<findNextOddValue(param_1)<<std::endl;
			write_file<<findNextOddValue(param_2)<<std::endl;
			break;


		case 'I':
			get_parameters();
			std::cin>>str;
			filename = str.c_str();
			readDataFromFile(filename);
			break;
		case 'O':
			get_parameters();
			std::cin>>str;
			filename = str.c_str();
			std::cout<<"All of the following program output will be written to the given file"<<std::endl;
			writeDataToFile(filename);
			break;
		default:
			break;
	}
}

