#include <iostream>
#include <string>

using namespace std;

int main() {
	string str1("Hello ");
	string str2 = "World!";
	string s = str1 + str2;

	cout << "The string: " << s << "\n";
	cout << "Length of string: " << s.length() << "\n";
	cout << "First character: " << s[0] << "\n";

	int lastPos = s.length() - 1;
	cout << "Last character: " << s[lastPos] << "\n";

	cin.get();
}