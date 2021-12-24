#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    //check the parameter
    if (argc != 2) {
        cout << "Syntax: <program> <filename>\n";

        return 1;
    }

    //open file, the second parameter of main function is the name of the text file
    ifstream inputFile(argv[1]);

    if (!inputFile) {
        cout << "Can not open file...\n";

        return 1;
    }

    //read the file line by line and output to console
    const int maxSize = 255; 
    char buff[maxSize + 1];

    while (inputFile.getline(buff, maxSize)) {
        cout << buff << "\n";
    }

    //close the file
    inputFile.close();

    return 0;
}