#include <iostream>
#include <vector>

using namespace std;

istream& operator>>(istream& inDev, vector<float>& a) {
	//initially, the vector has no elements.
	a.resize(0);

	float temp;

	//while the inDevice hasn't met the eof or the ending character.
	while (inDev >> temp) {
		a.push_back(temp);
	}

	return inDev;
}

ostream& operator<<(ostream& outDev, vector<float>& a) {
	//iterate through all elements
	for (int i = 0; i < a.size(); i++) {
		outDev << a[i] << " ";
	}

	outDev << "\n";

	return outDev;
}

int main4() {
	vector<float> a;

	cin >> a;

	cout << a;

	return 0;
}