#include <iostream>
#include <fstream>
#include <stack>
#include <list>
#include <vector>
#include <string>

typedef std::stack<std::string> Stack1; //default container: deque<string>
typedef std::stack<std::string, std::vector<std::string>> Stack2; //default container: vector<string>
typedef std::stack<std::string, std::list<std::string>> Stack3; //default container: list<string>

int main(int argc, char* argv[]) {
    std::ifstream inFile(argv[1]);
    
    Stack1 textlines;

    std::string line;
    while (getline(inFile, line)) {
        textlines.push(line + "\n");
    }

    while (!textlines.empty()) {
        std::cout << textlines.top();
        textlines.pop();
    }

    return 0;
}