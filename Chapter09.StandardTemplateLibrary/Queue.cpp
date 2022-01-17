#include <iostream>
#include <queue>
#include <string>

void printQueue(std::queue<int> q) {
    std::cout << "Queue q:\n";

    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }

    std::cout << "\n";
}

int main() {
    std::queue<int> q;

    //add 3 integers to q
    q.push(1);
    q.push(2);
    q.push(3);

    printQueue(q);

    //remove the top element, add 2 new
    q.pop();
    q.push(4);
    q.push(5);

    printQueue(q);

    std::cout << "The current size of queue: " << q.size() << "\n";

    return 0;
}