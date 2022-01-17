#ifndef _CONTAINER_H_
#define _CONTAINER_H_

#define MAX_ELEMENTS 1000

#include <iostream>
#include <vector>
#include <string>

class Object {
public:
    virtual std::string toString() {
        return "Object";
    }
};

class Container {
protected:
    int _iCount;

public:
    virtual void put(Object&) = 0;

    virtual Object& get() = 0;

    virtual Object& peek() = 0;

    virtual bool isEmpty() const;

    virtual bool isFull() const;

    virtual int numberOfElements() const;
};

#endif