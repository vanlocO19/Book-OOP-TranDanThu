#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>

int main() {
    std::list<int> coll1;
    std::vector<int> coll2;

    for (int i = 1; i <= 9; i++) {
        coll1.push_back(i);
    }

    coll2.resize(coll1.size());

    std::copy(coll1.begin(), coll1.end(), coll2.begin());

    for (auto pos = coll2.begin(); pos != coll2.end(); pos++) {
        std::cout << *pos << " ";
    }
    std::cout << "\n";

    return 0;
}