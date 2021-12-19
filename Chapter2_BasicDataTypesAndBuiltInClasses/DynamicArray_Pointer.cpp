#include <iostream>

using namespace std;

int main3() {
	int n;
	float* a;

	cin >> n;
	a = new float[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	delete[] a;
	
	return 0;
}