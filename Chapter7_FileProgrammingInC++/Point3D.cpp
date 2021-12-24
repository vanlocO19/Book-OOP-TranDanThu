#include <iostream>

using namespace std;

class Point3D {
private:
    int x, y, z;

public:
    Point3D(int a, int b, int c) {
        x = a;
        y = b;
        z = c;
    }

    friend ostream& operator<<(ostream& os, Point3D& p) {
        os << "(" << p.x << ", " << p.y << ", " << p.z << ")";
        return os;
    }
};

int main() {
    Point3D p(1, 2, 3);
    cout << p << "\n";
    return 0;
}