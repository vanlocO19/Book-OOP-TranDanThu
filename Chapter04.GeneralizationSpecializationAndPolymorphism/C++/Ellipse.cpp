#include "Ellipse.h"

Ellipse::Ellipse() {
    this->ra = 0;
    this->rb = 0;
}

Ellipse::Ellipse(float a, float b) {
    this->ra = a;
    this->rb = b;
}

void Ellipse::input(std::istream& inDev) {
    inDev >> this->ra >> this->rb;
}

float Ellipse::area() {
    return PI * this->ra * this->rb;
}