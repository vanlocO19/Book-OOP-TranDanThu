#include <iostream>
#include <fstream>

using namespace std;

int main() {
    //open file "data.txt" to read
    fstream myFile("data.txt", ios::in);

    //close file
    myFile.close();

    //read after closing file
    char temp[100];
    myFile >> temp; //failbit will be turned on

    cout << _S_failbit << "\n"; //my result here is 4 =))
}