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

	Fraction& operator+=(const Fraction& src);

	const Fraction operator+(const Fraction& src) const;

	bool operator==(const Fraction& src) const;

	Fraction& operator++();

	Fraction operator++(int integer);

	//overload the output operator
	friend std::ostream& operator<<(std::ostream& outDev, const Fraction& src);
};
