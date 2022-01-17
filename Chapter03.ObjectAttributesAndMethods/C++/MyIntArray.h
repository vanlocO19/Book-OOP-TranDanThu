#pragma once

class MyIntArray {
private:
	int* pArr;

	int size;

public:
	MyIntArray(int sz);

	~MyIntArray();

	MyIntArray& operator=(const MyIntArray&);
};
