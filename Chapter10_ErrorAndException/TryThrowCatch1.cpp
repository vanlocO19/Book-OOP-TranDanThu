#include <iostream>

double calculate(double x, double y) {
    if (x == y) {
        throw "divided by zero";
        //return 0;
    } else {
        return x * y / (x - y);
    }
}

int main() {
    double a = 7, b = 7;

    try {
        a = calculate(a, b);
    }
    
    catch(char* s) {
        std::cout << "Error: " << s << "\n";
        return 0;
    }

    return 0;
}