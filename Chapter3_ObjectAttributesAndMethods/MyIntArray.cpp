#include <iostream>
#include "MyIntArray.h"

MyIntArray::MyIntArray(int sz) {
	if (sz <= 0) {
		this->size = 0;
		this->pArr = NULL;

		return;
	}

	this->size = sz;
	this->pArr = new int[sz];

	for (int i = 0; i < sz; i++) {
		this->pArr[i] = 0;
	}
}

MyIntArray::~MyIntArray() {
	if (this->size > 0) {
		this->size = 0;

		delete[] this->pArr;
		this->pArr = NULL;
	}
}

MyIntArray& MyIntArray::operator=(const MyIntArray& src) {
	if (this != &src) {
		delete[] this->pArr;
		this->size = src.size;
		pArr = new int[this->size];
		for (int i = 0; i < this->size; i++) {
			this->pArr[i] = src.pArr[i];
		}
	}
	return *this;

}