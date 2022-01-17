//Cloning technique, also called Prototype design pattern

#include <iostream>
#include <string.h>


class Figure {
public:
    Figure() {

    }
    virtual char* className() = 0;
    virtual Figure* clone() = 0;

    static Figure* createObject(char* className) {
        if (strcmp(className, "Circle") == 0) {
            return new Circle();
        } else if (strcmp(className, "Ellipse") == 0) {
            return new Ellipse();
        }
    }
};

class Ellipse : public Figure {
public:
    Ellipse() {

    }

    virtual char* className() {
        return "Ellipse";
    }

    virtual Figure* clone() {
        return new Ellipse(*this);
    }
};

class Circle : public Figure {
public:
    Circle() {

    }

    virtual char* className() {
        return "Circle";
    }

    virtual Figure* clone() {
        return new Circle(*this);
    }
};