#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle {
public:
    Square();
    Square(float a);
    virtual void input(std::istream& inDevice);
};

#endif