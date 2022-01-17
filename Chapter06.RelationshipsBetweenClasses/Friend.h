class A {
private:
    //attributes of class A
    int a; 

public:
    //method of class A
    friend class B; //B is a friend of A
};

class B {
private:
    //attributes of class B
    A test;

public:
    //method of class B
    void testMethod() {
        test.a = 10; //can access to private members of class A
    }
};