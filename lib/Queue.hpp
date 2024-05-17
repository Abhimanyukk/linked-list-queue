#include <iostream>

class Queue
{
private:
    struct Node
    {
        Node *back;
        int value;

        Node() : back(NULL), value(0) {}
        Node(int value_) : back(NULL), value(value_) {}
    };

    Node *headNode;
    size_t length;

public:
    Queue() : headNode(new Node()), length(0) {}

    void push(int k);
    int pop();
    bool isEmpty();
    size_t len();
};
