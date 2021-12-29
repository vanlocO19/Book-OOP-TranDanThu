#include <iostream>
#include <set>

int main() {
    std::set<int> coll;

    int data[] = {3, 1, 5, 4, 1, 6, 2};
    int n = sizeof(data) / sizeof(data[0]);

    for (int i = 0; i < n; i++) {
        coll.insert(data[i]);
        coll.insert(3);
    }

    //use iterator to iterate all elements and output to console
    std::set<int>::const_iterator it = coll.begin();

    while (it != coll.end()) {
        std::cout << *it << " ";
        it++;
    }
    std::cout << "\n";

    return 0;
}