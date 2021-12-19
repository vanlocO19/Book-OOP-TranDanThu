#include <iostream>

class Singleton {
private:
    static Singleton* _instance; //the only object of class

    Singleton(); //constructor

public:
    static Singleton* getInstance();
};

//initialize the variable Singleton::_instance = NULL
Singleton* Singleton::_instance = nullptr;

Singleton::Singleton() {
    //...
}

Singleton* Singleton::getInstance() {
    if (_instance == nullptr) {
        _instance = new Singleton();
    }

    return _instance;
}

int main() {
    Singleton* object = Singleton::getInstance();
    //other instructions, use the 'object'

    return 0;
}