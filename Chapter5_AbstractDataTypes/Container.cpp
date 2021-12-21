#include "Container.h"

bool Container::isEmpty() const {
    if (this->_iCount == 0) {
        return true;
    }

    return false;
}

bool Container::isFull() const {
    if (this->_iCount == MAX_ELEMENTS) {
        return true;
    }

    return false;
}

int Container::numberOfElements() const {
    return this->_iCount;

    
}