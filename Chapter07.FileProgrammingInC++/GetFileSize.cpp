#include <iostream>
#include <fstream>
#include <string>

using namespace std;

long getFileSize(const char* fileName) {
    ifstream inFile(fileName, ios::binary);

    long fileSize = -1;

    if (!inFile.fail()) {
        inFile.seekg(0, ios::end);

        fileSize = inFile.tellg();
    }

    return fileSize;
}

int main() {
    const char* fileName = "TestDoc.txt";

    cout << "Size of file " << fileName << " is: " << getFileSize(fileName) << " bytes\n";
    
    return 0;
}