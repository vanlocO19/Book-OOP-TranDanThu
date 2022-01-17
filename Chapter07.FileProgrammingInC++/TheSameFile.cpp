#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
    fstream myFile("hello.txt", ios::in | ios::out);

    if (!myFile) {
        cout << "Can not open file\n";

        return 1;
    }

    char ch;
    //replace space with tab
    while (myFile.get(ch)) {
        if (ch == ' ') {
            int pos = myFile.tellg();
            pos--;

            myFile.seekp(pos);
            myFile.put('\t');
            myFile.seekg(pos + 1);
        }
    }

    myFile.close();

    return 0;
}