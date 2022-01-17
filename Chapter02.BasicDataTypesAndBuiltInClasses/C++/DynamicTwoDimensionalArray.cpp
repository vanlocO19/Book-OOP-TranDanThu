#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

typedef vector<double> doubleArray;

void matrixInit(vector<doubleArray>& a, int n) {
	a.resize(n);

	for (int i = 0; i < n; i++) {
		a[i].resize(n);
	}
}

istream& operator>>(istream& inDev, vector<doubleArray>& a) {
	int n;
	inDev >> n;

	matrixInit(a, n);

	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < a[i].size(); j++) {
			a[i][j] = 0;
			if (inDev) {
				inDev >> a[i][j];
			}
		}
	}

	return inDev;
}

ostream& operator<<(ostream& outDev, vector<doubleArray>& a) {
	outDev << a.size() << "\n";

	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < a[i].size(); j++) {
			outDev << a[i][j] << " ";
		}
		outDev << "\n";
	}

	return outDev;
}

int main5() {
	vector<doubleArray> a;
	
	cin >> a;

	cout << a;

	cin.get();

	return 0;
}