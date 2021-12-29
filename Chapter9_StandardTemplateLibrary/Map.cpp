#include <iostream>
#include <map>
#include <string>

template<class T>
void printMap(T &m) {
    auto pos = m.begin();

    while (pos != m.end()) {
        std::cout << "(" << pos->first << ", " << pos->second << ") ";
        ++pos;
    }
    std::cout << "\n";
}

int main() {
    std::map<int, std::string> m;
    typedef std::pair<int, std::string> MyPair;

    m.insert(MyPair(2, "is"));
    m.insert(MyPair(4, "example"));
    m.insert(MyPair(3, "an"));
    m.insert(MyPair(5, "of"));
    m.insert(MyPair(6, "map"));
    m.insert(MyPair(1, "This"));

    printMap(m);

    return 0;
}