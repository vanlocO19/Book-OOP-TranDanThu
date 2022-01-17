#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Figure.h"

class Rectangle : public Figure { //inheritance from Figure
protected:
    float width;
    float height;

public:
    Rectangle();

    Rectangle(float w, float h);

    virtual float area();

    virtual void input(std::istream& inDevice);
};

#endif