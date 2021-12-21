#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H

template<typename T>
class Node {
public:
    T data;

    Node* next;

    Node* prev;

    Node(T data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

template<typename T>
class LinkedList {
private:
    Node<T>* head;

    Node<T>* tail;

    int size;

public:
    LinkedList() {
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
    }

    ~LinkedList() {
        Node<T>* current = this->head;
        Node<T>* next = NULL;

        while (current != NULL) {
            next = current->next;
            delete current;
            current = next;
        }
    }

    void addHead(T data) {
        Node<T>* newNode = new Node<T>(data);

        if (this->head == NULL) {
            this->head = newNode;
            this->tail = newNode;
        } else {
            newNode->next = this->head;
            this->head->prev = newNode;
            this->head = newNode;
        }

        this->size++;
    }

    void addTail(T data) {
        Node<T>* newNode = new Node<T>(data);

        if (this->head == NULL) {
            this->head = newNode;
            this->tail = newNode;
        } else {
            newNode->prev = this->tail;
            this->tail->next = newNode;
            this->tail = newNode;
        }

        this->size++;
    }

    T& extractHead() {
        if (this->head == NULL) {
            throw std::run_time_error("Empty list");
        }

        T& data = this->head->data;
        Node<T>* temp = this->head;

        if (this->head == this->tail) {
            this->head = NULL;
            this->tail = NULL;
        } else {
            this->head = this->head->next;
            this->head->prev = NULL;
        }

        delete temp;
        this->size--;

        return data;
    }

    T& extractTail() {
        if (this->tail == NULL) {
            throw std::run_time_error("Empty list");
        }

        T& data = this->tail->data;
        Node<T>* temp = this->tail;

        if (this->head == this->tail) {
            this->head = NULL;
            this->tail = NULL;
        } else {
            this->tail = this->tail->prev;
            this->tail->next = NULL;
        }

        delete temp;
        this->size--;

        return data;
    }

    T& getHead() {
        if (this->head == NULL) {
            throw std::run_time_error("Empty list");
        }

        return this->head->data;
    }

    T& getTail() {
        if (this->tail == NULL) {
            throw std::run_time_error("Empty list");
        }

        return this->tail->data;
    }
};

#endif // _LINKEDLIST_H