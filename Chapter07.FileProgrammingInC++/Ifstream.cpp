#include <fstream>

using namespace std;

int main() {
    //create an object from class ifstream
    ifstream inputFile;
    ifstream inputFile2("data.txt");

    //open the file
    inputFile.open("data.txt");

    //read the file
    int iVal;
    inputFile >> iVal;

    return 0;
}