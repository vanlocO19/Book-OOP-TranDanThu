//appply the singleton design pattern for sorting algorithms

#include <iostream>
class SortAlgorithm {
private:
    static SortAlgorithm* _algorithm;            //save the only object of class
    void (*currentAlgorithm)(float[], int);     //save the selected algorithm
    SortAlgorithm();                             //private constructor

public:
    static SortAlgorithm* getObject(void (*pAlg)(float[], int) = nullptr);
    static void SelectionSort(float[], int);
    static void InsertionSort(float[], int);
    static void InterchangeSort(float[], int);
    void Sort(float[], int);
};

//warm-up the only object of the class (when there is no objects)
SortAlgorithm* SortAlgorithm::_algorithm = nullptr;

SortAlgorithm::SortAlgorithm() {
    currentAlgorithm = SelectionSort; //choose a default algorithm
}

//Method returns the only object of class, create class if there is not
SortAlgorithm* SortAlgorithm::getObject(void (*pAlg)(float[], int)) {
    if (_algorithm == nullptr) {
        _algorithm = new SortAlgorithm();
    }
    if (pAlg != nullptr) {
        _algorithm->currentAlgorithm = pAlg;
    }

    return _algorithm;
}

void SortAlgorithm::Sort(float a[], int n) {
    if (currentAlgorithm != nullptr) {
        currentAlgorithm(a, n);
    }
}

void SortAlgorithm::SelectionSort(float a[], int n) { //static
    int min;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        if (min != i) {
            float temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
}

void SortAlgorithm::InsertionSort(float a[], int n) { //static
    int pos;
    float x;

    for (int i = 1; i < n; i++) {
        x = a[i];
        for (pos = i; (pos > 0) && (a[pos - 1] > x); pos--) {
            a[pos] = a[pos - 1];
        }
        a[pos] = x;
    }
}

void SortAlgorithm::InterchangeSort(float a[], int n) { //static
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    float a[] = {1.4F, -5.2F, 3.3F, 0};
    int n = sizeof(a)/sizeof(a[0]);

    SortAlgorithm* alg = SortAlgorithm::getObject(SortAlgorithm::SelectionSort);

    alg->Sort(a, n);

    std::cout << "After sorting: " << "\n";
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << "\t";
    }
    std::cout << "\n";
    return 0;
}