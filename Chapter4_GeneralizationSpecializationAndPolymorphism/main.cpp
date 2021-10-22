#include "Rectangle.h"
#include "Square.h"

int main() {
    // Rectangle rec;
    // Square sq;

    // std::cout << "Rectangle's sizes (width and height): ";
    // rec.input(std::cin);
    // std::cout << "Rectangle's area = " << rec.area() << "\n";

    // std::cout << "Square's sizes: ";
    // sq.input(std::cin);
    // std::cout << "Square's area = " << sq.area() << "\n";

    // Rectangle* pRec;
    // Square sqr(10);
    // pRec = &sqr; //valid because Rectangle is the base class, while Square is the inheritance class 
    // pRec = new Square(5);

    Rectangle* pRec = nullptr;
    Rectangle rec;
    Square sq;

    // std::cout << "Rectangle's sizes (width and height): ";
    // pRec = &rec;
    // pRec->input(std::cin);
    // std::cout << "Rectangle's area = " << rec.area() << "\n";

    //This cannot have polymorphism until now, we need to edit the definition of class Rectangle and Square.
    std::cout << "Square's sizes: ";
    pRec = &sq;
    pRec->input(std::cin);
    std::cout << "Input completed!\n";
    std::cout << "Square's area = " << sq.area() << "\n";

    return 0;
}