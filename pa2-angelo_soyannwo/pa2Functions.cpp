
#include <iostream>
#include <fstream>
#include <cmath>
#include <cmath>
#include <time.h>
#include <time.h>
#include <stdlib.h>
#include "Q1.h"


extern const int ENTRIES;
extern int COUNT;

void initialize(){

	std::cout<< "EC327: Introduction to Software Engineering\n";
	std::cout<< "Fall 2022" <<std::endl <<"Programming Assignment 2"<<std::endl<<"Value of Entries is: "<<ENTRIES<<std::endl;

}

bool checkCode(char val) {

	char valid_code[32] = {'F','f', 'B', 'b', 'R', 'r', 'U', 'u', 'C', 'c', 'E', 'e', 'K', 'k', 'S', 's', 'N', 'n', 'L', 'l', 'Y', 'y', 'D', 'd', 'I', 'i', 'X', 'x', 'O', 'o', 'Q', 'q'};

	bool is_valid=0;
	for(int i=0; i<32; i++){

		if(val == valid_code[i]) {
			is_valid = 1;
			break;
		}
	}

	return is_valid;
}

void writeDataToFile(const char * file){

	std::ofstream myfile;
	myfile.open(file, std::ios_base::app);

	
	//loop for writing to a file
	char command_code;
		while ((ENTRIES>COUNT)){
			fflush(stdin);
			get_command_code(&command_code);
		
			if (checkCode(command_code)){
				command_code = normalize_input(command_code);

				if (command_code == 'Q'){
					std::cout<<"No more output will be written to the file"<<std::endl;
					break;
				}
				else{
					execute_command(command_code, myfile);
					COUNT++;
				}
			}
			if (COUNT == ENTRIES) { break; }
		}
	myfile.close();

	



}
//Overloaded read data for use in the WriteData function (i.e command O then command I)
void readDataFromFile(const char * file, std::ofstream &write_file){

	std::ifstream myfile;

	std::string garbage_string;
	int lines_to_skip = 0;


	//Count the number of commands in the file
	int number_of_lines = 0;
	std::string line;
	std::ifstream countlines("commands.txt");

	


	while (std::getline(countlines, line)){
		++number_of_lines;
	}
	int num_commands = number_of_lines/2;
	
	//loop for writing to a file
	char command_code;
		while ( (ENTRIES>COUNT) && (num_commands>0)){
			myfile.open(file);
			garbage_string.clear();
			for(int j=0; j<lines_to_skip; j++){ getline(myfile, garbage_string);}

			myfile>>command_code;
			myfile.close();
			lines_to_skip++;
			if (checkCode(command_code)){
				command_code = normalize_input(command_code);

				if (command_code == 'Q'){
					break;
					COUNT = 10;
				}
				else{
					execute_command(command_code, file, lines_to_skip, write_file);
					lines_to_skip++;
					COUNT++;
				}
			}
			if (COUNT == ENTRIES) { break; }
			num_commands--;
		}
	myfile.close();

}



void readDataFromFile(const char * file){

	std::ifstream myfile;

	std::string garbage_string;
	int lines_to_skip = 0;


	//Count the number of commands in the file
	int number_of_lines = 0;
	std::string line;
	std::ifstream countlines("commands.txt");

	while (std::getline(countlines, line)){
		++number_of_lines;
	}
	int num_commands = number_of_lines/2;
	
	//loop for writing to a file
	char command_code;
		while ( (ENTRIES>COUNT) && (num_commands>0)){
			myfile.open(file);
			garbage_string.clear();
			for(int j=0; j<lines_to_skip; j++){ getline(myfile, garbage_string);}

			myfile>>command_code;
			myfile.close();
			lines_to_skip++;
			if (checkCode(command_code)){
				command_code = normalize_input(command_code);

				if (command_code == 'Q'){
					break;
					COUNT = 10;
				}
				else{
					execute_command(command_code, file, lines_to_skip);
					lines_to_skip++;
					COUNT++;
				}
			}
			if (COUNT == ENTRIES) { break; }
			num_commands--;
		}
	myfile.close();

}





int factorial(int num){

	int result = 1;
	if (num == 0 || num ==1){
		return result;
	}
	else{
		for(int i = 1; i<=num; i++){
			result = result*i;
		}
	}
	return result;
}

int fibonacci(int num){

	int result;
	if (num == 0) {
		return 0;

	}
	else if ( num == 1) {
		return 1;
	}
	else {
		result = fibonacci(num-1) + fibonacci(num-2);
	}
	return result;

}

double findSqrtValue(double val){
	return std::sqrt(val);
}

double naturalLog(double val){
	return log(val);
}

double areaCircle(double radius){
	return 2*M_PI*radius*radius;
}

double areaSquare(double length){
	return length*length;
}

int findNextOddValue(int val){

	if (val%2 == 0){
		return val+1;
	}
	else {
		return val+2;
	}

}

int findNextEvenValue(int val){
	if (val%2 == 0){
		return val+2;
	}
	else {
		return val+1;
	}
}

double findNyanCatValue(double val){
	return pow((4*val), val) + val + 10;
}

double doMath(double num, char val){
	double result;
	switch(val) {
	
		case 'S':
			result = sin(num);
			break;
		case 'N':
			result = cos(num);
			break;
		case 'X':
			result = exp(num);
			break;
	}
	return result;
}

double lucky(double val){
	srand (val);
	return rand()%100;
}


