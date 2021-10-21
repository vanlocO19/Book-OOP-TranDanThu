#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include <iostream>

class Rectangle {
protected:
    float width;
    float height;

public:
    Rectangle(float w, float h);

    float Area();

    void Input(std::istream& inDevice);
};

#endif