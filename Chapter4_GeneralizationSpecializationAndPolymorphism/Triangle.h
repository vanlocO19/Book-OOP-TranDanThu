#ifndef _TRIANGLE_H
#define _TRIANGLE_H

#include "Figure.h"

class Triangle : public Figure {
protected:
    float baseSize;
    float height;

public:
    Triangle();

    Triangle(float a, float h);

    virtual float area();

    virtual void input(std::istream& inDev);
};

#endif