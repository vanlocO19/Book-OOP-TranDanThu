#include <iostream>
#include <iomanip>
#include "Figure.h"
#include "Operator.h"

using namespace std;

int main(){
	//
	//{ //begin a block
	//	//declare and create an object p of the Point2D class
	//	Point2D p;

	//	p.set(18, 8);
	//	p.move(20, 9);
	//} //end of a block, p is destructed
	//

	/*Circle mycir;

	std::cout << "Input center and radius: ";

	inputCircleData(std::cin, mycir);
	outputCircleData(std::cout, mycir);

	std::cin.get();*/

	/*int num = 0x4F3E;
	cout << setfill('*') << setw(25) << right;
	cout << "num (decimal) = " << num << endl;
	cout << setw(25) << right;
	cout << "num (hexa decimal) = " << hex << num << endl;
	cout << setw(25) << right;
	cout << "num (octal) = " << oct << num << endl;
	cin.get();*/

	Circle mycir;
	cin >> mycir;
	cout << mycir;

}