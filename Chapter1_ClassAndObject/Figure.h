#pragma once

#ifndef _FIGURE_H
#define _FIGURE_H

#include <iostream>

//declaration of the Point2D class
class Point2D {
private:
	double x, y;

public:
	void set(double x0, double y0);

	void move(double dx, double dy);

	void scale(double sx, double sy);
}; //end declaration of the Point2D class

//declaration of the Circle class
class Circle {
private:
	Point2D center;
	double radius;

public:
	void set(double x0, double y0, double r);

	void set(double r);

	void move(double dx, double dy);

	double area();

	double perimeter();
}; //end declaration of the Circle class

void inputCircleData(std::istream& inDevice, Circle& cir);

void outputCircleData(std::ostream& outDevice, Circle& cir);

#endif // !_FIGURE_H
