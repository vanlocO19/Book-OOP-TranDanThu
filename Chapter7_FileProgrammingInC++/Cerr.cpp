#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int x;
    cout << "Nhap mot so nguyen\n";
    cin >> x;

    //when user input wrongly, notify error in error.txt
    if (cin.fail()) {
        ofstream errorFile("error.txt");

        //save the default streambuf of cerr (console)
        streambuf* oldCerrBuf = cerr.rdbuf();

        //assign the streambuf of errorFile to cerr
        cerr.rdbuf(errorFile.rdbuf());

        //print error message
        cerr << "Error in data...\n";

        //return the streambuf of cerr to console
        cerr.rdbuf(oldCerrBuf);
    }

    return 0;
}