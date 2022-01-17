#include <vector>

template<class T>
class Queue {
private:
    std::vector<T> listObjs;

public:
    Queue();

    void enqueue(T& obj);

    T& dequeue();

    T& first();
};