#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void printLinkedList(Node *a)
{
    while (a != NULL)
    {
        cout << a->data << ' ';
        a = a->next;
    }
}
void insertAtFront(Node **head, int data)
    {
        Node *insert = new Node();
        insert->data = data;
        insert->next = *head;
        head = *insert;
        // return *insert;
    }
    int main()
    {
        Node *head = new Node();
        Node *second = new Node();
        Node *third = new Node();
        head->data = 0;
        head->next = second;
        second->data = 1;
        second->next = third;
        third->data = 4;
        third->next = NULL;
        insertAtFront(&head,5);
        printLinkedList(head);
        return 0;
    }