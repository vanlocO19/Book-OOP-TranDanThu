#include "Stack.h"

void Stack::push(Object& obj) {
    if (!this->isFull()) {
        this->listObjs.addHead(obj);
        
        this->_iCount++;
    }
}

Object& Stack::pop() {
    if (!this->isEmpty()) {
        this->_iCount--;

        return this->listObjs.extractHead();
    }
}

Object& Stack::top() {
    if (!this->isEmpty()) {
        return this->listObjs.getHead();
    }
}