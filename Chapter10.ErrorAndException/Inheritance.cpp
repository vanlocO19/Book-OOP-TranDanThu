#include <iostream>

class MyError {

};

class MyLogicalError : public MyError {
    
};

int main() {
    try {
        throw MyLogicalError();
    }

    //this statement block will be processed
    catch (MyError& err) {
        std::cout << "Catch MyError...\n";
    }

    catch (...) {
        std::cout << "Catch something else\n";
    }

    return 0;
}