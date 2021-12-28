template<class T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

//the keyword "typename" can be also used instead of "class"
template<typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

//if there is more than one data types
template<class T, class U>
void swap(T& a, U& b) {
    T temp = a;
    a = b;
    b = temp;
}