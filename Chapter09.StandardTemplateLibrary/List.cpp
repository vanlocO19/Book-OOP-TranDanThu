#include <iostream>
#include <list>
#include <algorithm>

void printList(std::ostream& outDev, std::list<int> &L1) {
    std::list<int>::iterator pos = L1.begin();

    while (pos != L1.end()) {
        outDev << *pos << " ";
        pos++;
    }
    outDev << "\n";
}

void printTwoList(std::ostream& outDev, std::list<int>& L1, std::list<int>& L2) {
    std::cout << "List 1: ";
    printList(outDev, L1);

    std::cout << "List 2: ";
    printList(outDev, L2);
}

int main() {
    std::list<int> list1, list2;

    for (int i = 0; i < 6; i++) {
        list1.push_back(i);
        list2.push_back(i);
    }

    printTwoList(std::cout, list1, list2);

    //splice the 3, 4, 5, 6 range of list1 to list2
    list2.splice(find(list2.begin(), list2.end(), 3), list1);

    printTwoList(std::cout, list1, list2);

    //move the last element of list2 to the beginning
    list2.splice(list2.end(), list2, list2.begin());

    printTwoList(std::cout, list1, list2);

    list2.sort();

    list1 = list2;

    list2.unique();
    
    printTwoList(std::cout, list1, list2);

    list1.merge(list2);

    printTwoList(std::cout, list1, list2);

    return 0;
}