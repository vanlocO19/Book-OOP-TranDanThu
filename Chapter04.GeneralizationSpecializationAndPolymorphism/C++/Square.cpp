#include "Square.h"

Square::Square() {
    //this::Rectangle();
}

Square::Square(float a) {
    this->height = a;
    this->width = a;
}

void Square::input(std::istream& inDev) {
    inDev >> this->width;
    this->height = this->width;
}