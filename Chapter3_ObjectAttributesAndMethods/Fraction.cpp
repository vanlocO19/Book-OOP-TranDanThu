#include <iostream>
#include "Fraction.h"

void Fraction::input(int num, int den) {
	this->numerator = num;
	this->denominator = den;
}

void Fraction::output() {
	if (this->numerator == 0 || this->denominator == 1) {
		std::cout << this->numerator << "\n";
	}
	else {
		std::cout << this->numerator << "/" << this->denominator << "\n";
	}
}

Fraction::Fraction() {
	this->numerator = 0;
	this->denominator = 1;
}

Fraction::Fraction(int integer) {
	this->numerator = integer;
	this->denominator = 1;
}

Fraction::Fraction(int num, int den) {
	if (den != 0) {
		this->numerator = num;
		this->denominator = den;
	}
}

Fraction::Fraction(const Fraction& fr) {
	this->numerator = fr.numerator;
	this->denominator = fr.denominator;
}