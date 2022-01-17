#include "Rectangle.h"

Rectangle::Rectangle() {
    this->width = 0;
    this->height = 0;
}

Rectangle::Rectangle(float w, float h) {
    this->width = w;
    this->height = h;
}

void Rectangle::input(std::istream& inDev) {
    inDev >> this->width >> this->height;
}

float Rectangle::area() {
    return this->width * this->height;
}