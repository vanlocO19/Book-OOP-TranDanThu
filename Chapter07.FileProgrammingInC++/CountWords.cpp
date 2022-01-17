#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int countWords(istream& inDev) {
    long cnt = 0;
    string word;

    while (inDev >> word) {
        cnt++;
    }

    return cnt;
}

int main() {
    ifstream inFile("MyDoc.txt");

    if (!inFile.fail()) {
        long wordCount = countWords(inFile);

        cout << "The file contains " << wordCount << " words.\n";
    }

    return 0;
}