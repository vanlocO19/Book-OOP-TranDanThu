#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outputFile("hello.txt", ios::app); //open file

    if (!outputFile) {
        cout << "cannot open file\n";

        return 1;
    }

    //append the string "Hello World" to the end of file
    char* str = "Hello world!";
    
    while (*str) {
        outputFile.put(*str);

        str++;
    }

    outputFile.close();

    return 0;
}