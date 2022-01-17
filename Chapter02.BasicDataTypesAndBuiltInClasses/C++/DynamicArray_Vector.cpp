#include <iostream>
#include <vector>

using namespace std;

int main2() {
	int n;
	vector<float> a;

	cin >> n;

	//a.resize(n);

	for (int i = 0; i < n; i++) {
		//cin >> a[i];
		
		int x;
		cin >> x;
		a.push_back(x);
	}

	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}

	return 0;
}