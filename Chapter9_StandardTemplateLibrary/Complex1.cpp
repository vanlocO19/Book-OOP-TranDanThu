#include <iostream>
#include <complex>

int main() {
    double pi = 3.14159265359;

    //create a complex number c1 from the real and imaginary parts
    std::complex<double> c1(4.00, 5.00);
    std::cout << "Create a complex number c1 from the real and imaginary parts: " << c1 << "\n";

    //create a complex number using copy constructor
    std::complex<double> c2(c1);
    std::cout << "Create a complex number c2 using copy constructor: " << c2 << "\n";

    //create a complex number c3 from modulus and argument
    std::complex<double> c3(std::polar(sqrt((double)8.00), pi/4.00));
    std::cout << "Create a complex number c3 from modulus and argument: " << c3 << "\n";

    //re-calculate the modulus and argument of c3
    double absc3 = abs(c3);
    double argc3 = arg(c3);
    std::cout << "Recalculate the modulus and argument of c3: " << absc3 << " " << argc3 << "\n";

    return 0;
}