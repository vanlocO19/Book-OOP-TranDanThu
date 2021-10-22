#include "Triangle.h"

Triangle::Triangle() {
    this->baseSize = 0;
    this->height = 0;
}

Triangle::Triangle(float a, float h) {
    this->baseSize = a;
    this->height = h;
}

void Triangle::input(std::istream& inDev) {
    inDev >> this->baseSize >> this->height;
}

float Triangle::area() {
    return 0.50 * this->baseSize * this->height;
}