#include <iostream>
#include "Figure.h"

//declare Pi constant to use in Circle class
const double PI = 3.14159;

//function used to set the value of x and y with x0 and y0.
void Point2D::set(double x0, double y0) {
	this->x = x0;
	this->y = y0;
}

//function used to move the point.
void Point2D::move(double dx, double dy) {
	this->x += dx;
	this->y += dy;
}

//function used to scale the coordinates of the point.
void Point2D::scale(double sx, double sy) {
	this->x *= sx;
	this->y *= sy;
}

//function used to set the values for the circle.
void Circle::set(double x0, double y0, double r) {
	this->center.set(x0, y0); //call the method of Point2D class.

	//ensure that the radius is always nonnegative.
	if (r < 0) {
		r = 0;
	}

	this->radius = r; //assign r to the radius of the circle.
}

//function used to set value for the radius of a circle.
void Circle::set(double r) {

	//ensure that the radius is always nonnegative.
	if (r >= 0) {
		this->radius = r;
	}
}

//function used to move the center of the circle.
void Circle::move(double dx, double dy) {
	this->center.move(dx, dy); //call the method of the Point2D class.
}

//function used to count the area of the circle.
//formula: area = pi * radius^2
double Circle::area() {
	return PI * this->radius * this->radius;
}

//function used to count the perimeter of the circle.
//formula: perimeter = 2 * pi * radius
double Circle::perimeter() {
	return 2 * PI * this->radius;
}

void inputCircleData(std::istream& inDevice, Circle& cir) {
	double x0, y0, r;
	inDevice >> x0 >> y0 >> r;
	cir.set(x0, y0, r);
}

void outputCircleData(std::ostream& outDevice, Circle& cir) {
	outDevice << "+ Area of the circle: " << cir.area() << "\n";
	outDevice << "+ Perimeter of the circle: " << cir.perimeter() << "\n";
}