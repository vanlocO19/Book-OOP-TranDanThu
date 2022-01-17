#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> coll;
    std::vector<int>::iterator pos;

    //add integers to coll
    int data[] = {2, 5, 4, 1, 6, 3};
    int n = sizeof(data) / sizeof(data[0]);
    for (int i = 0; i < n; i++) {
        coll.push_back(data[i]);
    }

    //find maximum and minimum element of coll
    pos = std::min_element(coll.begin(), coll.end());
    std::cout << "Minimum element: " << *pos << "\n";
    pos = std::max_element(coll.begin(), coll.end());
    std::cout << "Maximum element: " << *pos << "\n";

    //sort all elements in coll in ascending order
    std::sort(coll.begin(), coll.end());

    //find the first element of coll that is equal to 3
    pos = std::find(coll.begin(), coll.end(), 3);

    //reverse from the position of pos to the end of coll
    std::reverse(pos, coll.end());

    //output to console
    for (pos = coll.begin(); pos != coll.end(); pos++) {
        std::cout << *pos << " ";
    }
    std::cout << "\n";

    return 0;
}