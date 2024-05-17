#include "Queue.hpp"

void Queue::push(int k)
{
    Node *node = this->headNode;
    while (node->back != NULL)
    {
        node = node->back;
        this->length++;
    }

    node->back = new Node(k);
}

int Queue::pop()
{
    if (this->headNode->back == NULL)
    {
        throw std::logic_error("Empty queue");
    }

    int value = headNode->back->value;
    this->headNode = headNode->back;
    this->length--;

    return value;
}

bool Queue::isEmpty()
{
    return (this->headNode->back == NULL);
}

size_t Queue::len()
{
    return this->length;
}
