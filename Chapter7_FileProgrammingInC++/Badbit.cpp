#include <iostream>
#include <fstream>

using namespace std;

int main() {
    //open file "data.txt" to write
    fstream myFile("data.txt", ios::out);

    //close file
    myFile.close();

    //write after closing file
    myFile << "abc\n"; //badbit will be turned on

    cout << _S_badbit << "\n";

    return 0;
}