#include <iostream>
#include <list>

int main() {
    std::list<char> coll;
    for (char c = 'a'; c <= 'z'; c++) {
        coll.push_back(c);
    }

    std::list<char>::const_iterator pos = coll.begin();
    while (pos != coll.end()) {
        std::cout << *pos << " ";
        ++pos;
    }
    std::cout << "\n";

    return 0;
}