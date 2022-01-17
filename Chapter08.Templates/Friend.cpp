#include <iostream>

template<class T>
class A {
private:
    int a;

public:
    //instead of implementing the friend function inside the class,
    //we can add the <> symbol to the class name
    friend std::ostream& operator<<<>(std::ostream& out, const A<T>& src);
};

template<class T>
std::ostream& operator<<(std::ostream& out, const A<T>& src) {
    out << "The value is: " << src.a << "\n";

    return out;
}