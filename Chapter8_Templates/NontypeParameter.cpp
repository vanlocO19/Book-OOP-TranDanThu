//nontype parameter
template<class T, int SIZE>
class MyArray {
private:
    T arr[SIZE];

public:
};

int main() {
    MyArray<int, 100> arr;

    return 0;
}

//we can give the default value for the template parameter
template<class T = int, int SIZE = 100>
class MyArray{
private:
    T arr[SIZE];

public:
};