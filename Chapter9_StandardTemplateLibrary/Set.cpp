#include <iostream>
#include <set>

template<class T>
void printSet(std::ostream& outDev, T& ms) {
    auto pos = ms.begin(); //I don't know why my g++ compiler found error if I write: T::iterator pos = ms.begin();

    while (pos != ms.end()) {
        outDev << *pos << " ";
        ++pos;
    }
    outDev << "\n";
}

int main() {
    std::set<int, std::greater<int>> ms;

    int a[] = {2, 6, 4, 1, 5, 3};
    int n = sizeof(a) / sizeof(a[0]);
    
    for (int i = 0; i < n; i++) {
        ms.insert(a[i]);
    }

    printSet(std::cout, ms);

    return 0;
}