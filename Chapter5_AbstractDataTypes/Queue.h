#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "Container.h"
#include "LinkedList.h"

class Queue : public Container {
private:
    LinkedList<Object> listObjs;

public:
    void enqueue(Object&);

    Object& dequeue();

    Object& first();
};

#endif // _QUEUE_H_