#include <iostream>

class Singleton {
private:
    static Singleton* _instance; //the only object of class

    Singleton(); //constructor

public:
    static Singleton* getInstance();
};