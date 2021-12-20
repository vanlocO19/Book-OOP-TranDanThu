#ifndef _CONTAINER_H_
#define _CONTAINER_H_

class Container {
private:
    int iCount;

public:
    virtual void put(Object&) = 0;

    virtual Object& get() = 0;

    virtual Object& peek() = 0;

    virtual bool isEmpty() const;

    virtual bool isFull() const;

    virtual int numberOfElements() const;
};

#endif