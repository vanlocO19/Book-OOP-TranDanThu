#include <iostream>
#include <vector>

int main() {
    std::vector<int> coll;

    //add integers from 1 to 6 to coll
    for (int i = 1; i <= 6; i++) {
        coll.push_back(i);
    }

    //output elements of coll
    for (int i = 0; i < coll.size(); i++) {
        std::cout << coll[i] << " ";
    }
    std::cout << "\n";

    return 0;
}