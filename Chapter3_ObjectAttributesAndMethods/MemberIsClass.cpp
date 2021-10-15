#include <iostream>

//in case data member of class A has the type is class B,
//when A is constructed, 
//the constructor of B will be called first.
//when destruct, the destructor of A will be caleed first (?)

class B  {
public:
    B() {
        std::cout << "Construct B" << "\n";
    }

    ~B() {
        std::cout << "Destruct B" << "\n";
    }
};

class A {
private:
    B b; //constructor of B will be called first

public:
    A() {
        std::cout << "Construct A\n";
    }

    ~A() {
        std::cout << "Destruct A\n";
    }
};

int main() {
    A a;
    return 0;
}