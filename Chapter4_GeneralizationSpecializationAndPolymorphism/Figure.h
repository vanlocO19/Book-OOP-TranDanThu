#ifndef _FIGURE_H
#define _FIGURE_H

#include <iostream>

class Figure {
public:
    Figure();

    virtual void input(std::istream& inDev);
    
    virtual float area();
};


#endif