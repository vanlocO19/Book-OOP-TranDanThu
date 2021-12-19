#include <iostream>
#include "Figure.h"

//extraction operator for input.
std::istream& operator>>(std::istream& inDevice, Circle& cir) {
	double x0, y0, r;
	inDevice >> x0 >> y0 >> r;
	cir.set(x0, y0, r);
	return inDevice;
}

//insertion operator for output.
std::ostream& operator<<(std::ostream& outDevice, Circle& cir) {
	outDevice << "+ Area of the circle: " << cir.area() << "\n";
	outDevice << "+ Perimeter of the circle: " << cir.perimeter() << "\n";
	return outDevice;
}