#include <iostream>
#include <fstream>

using namespace std;

class CFraction {
private:
    int num, den;

public:
    CFraction(int n = 0, int d = 1) {
        num = n;
        den = d;
    }
    //declare a friend operator >> for CFraction
    friend istream& operator>>(istream& inDev, CFraction& f);
};

istream& operator>>(istream& inDev, CFraction& f) {
        inDev >> f.num >> f.den;
        
        return inDev;
}

CFraction* CFractionArrInput(istream& inDev, int& n) {
    CFraction* arr = nullptr;
    
    inDev >> n;

    if (inDev.fail() || n <= 0) {
        cout << "Invalid input...\n";

        return arr;
    }

    CFraction* arr = new CFraction[n];

    if (arr != nullptr) {
        for (int i = 0; i < n; i++) {
            inDev >> arr[i];

            if (inDev.fail()) {
                cout << "Invalid input...\n";

                delete[] arr;
                arr = nullptr;

                break;
            }
        }
    }

    return arr;
}

int main() {
    ifstream inputFile("data.inp"); //open file

    //can not open file
    if (inputFile.fail()) {
        cout << "Can not open file...\n";

        return 1;
    }

    int n;

    CFraction* arr = CFractionArrInput(inputFile, n);
    
    inputFile.close();

    return 0;
}