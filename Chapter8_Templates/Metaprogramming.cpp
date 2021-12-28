//This is an application of templates,
//metaprogramming uses template to calculate factorial of n

#include <iostream>

template<int N>
struct Factorial {
    enum {
        value = N * Factorial<N - 1>::value
    };
};

template<>
struct Factorial<0> {
    enum {
        value = 1
    };
};

int main() {
    int x = Factorial<4>::value;
    std::cout << x << "\n";
    long long y = Factorial<15>::value;
    std::cout << y << "\n";

    return 0;
}