#include <iostream>

template<class T>
class A {
private:
    T a;

public:
    void doSth() {
        std::cout << "do something...\n";
    }
};

template<class T>
class B : public A<T> {
public:
    void doSthElse() {
        this->doSth();
        //or using A<T>::doSth;
        //or A<T>::doSth();
        //do not use only doSth() when using gcc/g++ compiler
    }
};