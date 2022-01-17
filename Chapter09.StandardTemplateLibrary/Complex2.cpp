#include <iostream>
#include <complex>

int main() {
    std::complex<double> cd(1, 0);
    double d1 = 1.00;

    if (d1 == cd) {
        std::cout << "cd = d1\n";
    } else {
        std::cout << "cd != d1\n";
    }

    return 0;
}