#ifndef _STACK_H_
#define _STACK_H_

#include "Container.h"
#include "LinkedList.h"

class Stack : public Container {
private:
    LinkedList<Object> listObjs;

public:
    void push(Object&);

    Object& pop();
    
    Object& top();
};

#endif // _STACK_H_