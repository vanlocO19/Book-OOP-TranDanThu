#include <iostream>
#include <fstream>

using namespace std;

void transferData(istream& inDev, ostream& outDev) {
    char data;

    while (inDev.get(data)) {
        outDev.put(data);
    }
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cout << "syntax: <program> <filename>\n";

        return 1;
    }

    ofstream outputFile(argv[1]);

    if (!outputFile) {
        cout << "Cannot open file\n";

        return 1;
    }

    transferData(cin, outputFile);

    return 0;
}