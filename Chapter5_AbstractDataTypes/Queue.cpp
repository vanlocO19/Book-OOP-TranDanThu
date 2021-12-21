#include "Queue.h"

void Queue::enqueue(Object& obj) {
    if (!this->isFull()) {
        this->listObjs.addTail(obj);
        this->_iCount++;
    }
}

Object& Queue::dequeue() {
    if (!this->isEmpty()) {
        this->_iCount--;

        return this->listObjs.extractHead();
    }
}

Object& Queue::first() {
    if (!this->isEmpty()) {
        return this->listObjs.getHead();
    }
}