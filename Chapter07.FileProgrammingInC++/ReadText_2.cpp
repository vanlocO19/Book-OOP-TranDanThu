#include <iostream>
#include <fstream>

using namespace std;

void transferLines(istream& inDev, ostream& outDev) {
    const int maxSize = 255;
    char buff[maxSize + 1];

    while (inDev.getline(buff, maxSize)) {
        outDev << buff << "\n";
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cout << "syntax: <program> <filename>\n";

        return 1;
    }

    ifstream inputFile(argv[1]);

    if (!inputFile) {
        cout << "Can not open file...\n";

        return 1;
    }

    transferLines(inputFile, cout);

    inputFile.close();

    return 0;
}