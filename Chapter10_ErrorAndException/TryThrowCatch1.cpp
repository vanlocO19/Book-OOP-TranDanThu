#include <iostream>

double calculate(double x, double y) {
    if (x == y) {
        throw "divided by zero";
        //return 0;
    } else {
        return x * y / (x - y);
    }
}

void quit() {
    std::cout << "Unexpected error\n";
    exit(0);
}

int main() {
    double a = 7, b = 7;

    std::set_terminate(quit);

    try {
        a = calculate(a, b);
    }
    
    catch(const char* s) {
        std::cout << "Error: " << s << "\n";
        return 0;
    }

    return 0;
}