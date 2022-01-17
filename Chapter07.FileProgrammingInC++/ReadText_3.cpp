#include <iostream>
#include <fstream>

using namespace std;

void transferData(istream& inDev, ostream& outDev) {
    char data;

    while (inDev.get(data)) {
        outDev << data;
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

    transferData(inputFile, cout);

    inputFile.close();

    return 0;
}