#include <iostream>
#include <fstream>
using namespace std;

void writeToFile(ofstream &outputFile, int x);
void writeToFile2(ofstream &outputFile, int x);

int main()
{
    ofstream outputFile;
    outputFile.open("text.txt", std::ios_base::app);
    for (int i = 0; i < 10; i++)
    {
        writeToFile(outputFile, i);
    }
    outputFile.close();
    return 0;
}

void writeToFile(ofstream &outputFile, int x)
{
    writeToFile2(outputFile, x);
}

void writeToFile2(ofstream &outputFile, int x)
{
    outputFile << x << endl;
}

