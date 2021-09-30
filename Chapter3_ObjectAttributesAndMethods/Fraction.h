#pragma once

class Fraction {
private:
	int numerator;

	int denominator;

public:
	void input(int, int);

	void output();

	//default constructor
	Fraction();

	//interger constructor for fraction
	Fraction(int);

	//fully-parameterized constructor
	Fraction(int, int);

	//copy constructor
	Fraction(const Fraction&);
};
