#include "ctype.h"

template<class T>
void move(T& x, int k) {
    x += k;
}

template<>
void move<char>(char& x, int k) {
    //assume that x is in the 'A'..'Z' range or 'a'..'z' range
    //to be simlple, we will consider the k > 0
    if (x == toupper(x)) {
        //if x exceeds the 'Z' range, then we need to move it to 'A' range
        if (x + k > 'Z') {
            x = 'A' + (x + k - 'Z') - 1;
        } else {
            x += k;
        }
    } else {
        //x == tolower(x)
        if (x + k > 'z') {
            x = 'a' + (x + k - 'z') - 1;
        } else {
            x += k;
        }
    }
}