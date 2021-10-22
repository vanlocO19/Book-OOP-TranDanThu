#ifndef _ELLIPSE_H
#define _ELLIPSE_H

#include "Figure.h"

#define PI (float)3.14159

class Ellipse : public Figure {
protected:
    float ra;
    float rb;

public:
    Ellipse();

    Ellipse(float a, float b);

    virtual void input(std::istream& inDev);

    virtual float area();
};

#endif