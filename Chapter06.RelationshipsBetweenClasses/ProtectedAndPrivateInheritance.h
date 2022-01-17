class A {
private:
    //attributes

public:
    //methods
};

class B : protected A {
private:
    //attributes

public:
    //methods
};

//private inheritance is often used to represent the HAS-A relationship, but there is some difference.
class C : private A {
private:
    //attributes

public: 
    //methods
};

//IS-IMPLEMENTED-IN-TERMS-OF-HAS-A-RELATIONSHIP
class List {
private:
    //attributes of class List

public:
    //methods of class List
};

class CarPark : private List {
private:
    //attributes of class CarPark

public: 
    //methods of class CarPark
};