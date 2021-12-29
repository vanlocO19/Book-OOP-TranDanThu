#include <iostream>

struct Data {
    //attributes
};

struct Node {
    int key;
    
    Data info;

    Node *pLeft, *pRight;
};

void findNode(Node* p, int k) {
    if (p->key == k) {
        throw p;
    }

    if (p->pLeft != NULL) {
        findNode(p->pLeft, k);
    }

    if (p->pRight != NULL) {
        findNode(p->pRight, k);
    }
}

int main() {
    Node* pRoot;
    
    int value;

    //construct a tree with pRoot
    
    try {
        findNode(pRoot, value);
    }

    catch (Node* p) {
        //process after finding
    }

    return 0;
}