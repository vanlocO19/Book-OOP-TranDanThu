#include <iostream>
#include <vector>

using namespace std;

template<class T>
istream& operator>>(istream& inDev, vector<T>& arr) {
    T p;

    arr.resize(0);

    while (inDev >> p) {
        arr.push_back(p);
    }

    return inDev;
}