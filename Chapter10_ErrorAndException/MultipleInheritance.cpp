#include <iostream>

class MyInputError {

};

class MyDatabaseError {

};

class MyCompoundError : public MyInputError, public MyDatabaseError {

};

void updateData() {
    // ...
    // process & meet database error
    throw MyCompoundError();
}

void input() {
    // ...
    //process & meet input error
    throw MyCompoundError();
}

void processDatabase() {
    try {
        updateData();
    }

    catch (MyDatabaseError& err) {
        //process database error
        std::cout << "Database error\n";
    }
}

void processInputOutput() {
    try {
        input();
    }

    catch (MyInputError& err) {
        //process input error
        std::cout << "Input error\n";
    }
}