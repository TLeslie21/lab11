/**
 *   @file: lab11.cc
 * @author: Tavier Leslie
 *   @date: 3/29/22
 *  @brief: Program to take inputs from a file, load them into arrays,
 *          then print out the highest and lowest elements.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <cctype>
#include <vector>
#include <string>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    ifstream inStream;    
    string inFile = "text.txt";
    ofstream outStream;
    string outFile;
    
    cout << "Enter the input file name: ";
    cin >> inFile;
    inStream.open(inFile);
    if (inStream.fail())
    {
        exit(0);
    }

    cout << "Enter the output file name: ";
    cin >> outFile;
    inStream.open(outFile);
    if (outStream.fail())
    {
        exit(0);
    }

    vector<string> info;
    char x;
    string information;

    while (inStream >> information){    
        for (int i = 0; i < info.size(); i++)
        {
            cout << info[i];
        }
        cout << endl;
    }



    inStream.close();
    outStream.close();
    return 0;
} /// main