#ifndef _CIRCLE_H
#define _CIRCLE_H

#include "Ellipse.h"

class Circle : public Ellipse {
public:
    Circle();

    Circle(float r);

    virtual void input(std::istream& inDev);
};

#endif