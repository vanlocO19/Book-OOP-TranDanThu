#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void countAlphabet(istream& inDev, vector<long>& cnt) {
    inDev.seekg(0);

    cnt.resize('Z' - 'A' + 1);

    for (int i = 0; i < cnt.size(); i++) {
        cnt[i] = 0;
    }

    char ch;
    
    while (inDev >> ch) {
        ch = toupper(ch);

        if (ch >= 'A' && ch <= 'Z') {
            cnt[ch - 'A']++;
        }
    }
}

void showCounts(ostream& outDev, vector<long>& cnt) {
    for (int i = 0; i < cnt.size(); i++) {
        if (cnt[i] > 0) {
            outDev << "Number of " << char('A' + i) << ": " << cnt[i] << "\n";
        }
    }
}

int main() {
    ifstream inFile("TestDoc.txt");

    vector<long> cntList;

    if (!inFile.fail()) {
        ofstream outFile("ResultCounting.txt");

        countAlphabet(inFile, cntList);

        showCounts(outFile, cntList);
    }
}