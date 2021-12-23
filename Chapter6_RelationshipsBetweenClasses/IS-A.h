#include <iostream>

//only use public inheritance to implement IS-A relationship

class Animal {
public:
    virtual void speak() = 0;
};

class Cat : public Animal {
public:
    void speak() {
        std::cout << "Meow meow...\n";
    }
};

class Sheep : public Animal {
public:
    void speak() {
        std::cout << "Be be ...\n";
    }
};