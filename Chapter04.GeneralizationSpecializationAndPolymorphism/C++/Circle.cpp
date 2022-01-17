#include "Circle.h"

Circle::Circle() : Ellipse() {

}

Circle::Circle(float r) : Ellipse(r, r) {

}

void Circle::input(std::istream& inDev) {
    inDev >> this->ra;
    this->rb = this->ra;
}