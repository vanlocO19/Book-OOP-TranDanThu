#include <iostream>

//static data member <=> class-level member
//static method <=> class-level method

class Test {
private: 
    static int count;

public:
    static int show() {
        return count;
    }

    Test() {
        count++;
    }

    ~Test() {
        count--;
    }
};

int Test::count = 0;

int main() {
    Test a;
    Test b;
    std::cout << "The number of objects is: " << Test::show() << "\n";

    return 0;
}