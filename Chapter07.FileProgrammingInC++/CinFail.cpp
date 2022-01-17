#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x; //input an integer from keyboard to x

    //if user input wrongly, notify error
    if (cin.fail()) {
        cout << "Input error!\n";
    }

    return 0;
}