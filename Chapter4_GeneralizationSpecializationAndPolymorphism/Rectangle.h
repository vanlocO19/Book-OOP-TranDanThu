#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include <iostream>

class Rectangle {
protected:
    float width;
    float height;

public:
    Rectangle();

    Rectangle(float w, float h);

    float area();

    virtual void input(std::istream& inDevice);
};

#endif