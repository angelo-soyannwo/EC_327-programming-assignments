#ifndef PA2FUNCTIONS
#define PA2FUNCTIONS

#include <fstream>

void initialize();
bool checkCode(char);
void writeDataToFile(const char *);
void readDataFromFile(const char *);
void readDataFromFile(const char * file, std::ofstream &write_file);
int factorial(int);
int fibonacci(int);
double findSqrtValue(double);
double naturalLog(double);
double areaCircle(double);
double areaSquare(double);
int findNextOddValue(int);
int findNextEvenValue(int);
double findNyanCatValue(double);
double doMath(double, char);
double lucky(double);

#endif
