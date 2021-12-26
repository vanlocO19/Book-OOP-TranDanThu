//This problem can also be solved using map

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct WordEntry {
    string word;
    int count;
};

typedef vector<WordEntry> WordList;

void checkNewWord(WordList& book, string word) {
    if (word.length() == 0) {
        return;
    }

    long n = book.size();

    while (n--) {
        if (book[n].word == word) {
            book[n].count++;
            return;
        }
    }

    WordEntry newWord;
    newWord.word = word;
    newWord.count = 1;

    book.push_back(newWord);
}

void countEachWord(istream& inDev, WordList& book) {
    char ch;
    string word = "";

    while (inDev.get(ch)) {
        ch = tolower(ch);
        
        if (ch >= 'a' && ch <= 'z') {
            word += ch;
        } else {
            checkNewWord(book, word);
            word = "";
        }
    }
}

void showWords(ostream& outDev, WordList& book) {
    for (int i = 0; i < book.size(); i++) {
        outDev << book[i].word << ": " << book[i].count << "\n";
    }
}

int main() {
    WordList book;

    ifstream inFile("TestDoc.txt");
    ofstream outFile("ResultCountingWords.txt");

    countEachWord(inFile, book);

    showWords(outFile, book);

    return 0;
}