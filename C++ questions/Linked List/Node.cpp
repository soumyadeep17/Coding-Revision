#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(Node *&head,int data)
    {
        this->data = data;
        this->next = NULL;
        head->next = this;
    }
};