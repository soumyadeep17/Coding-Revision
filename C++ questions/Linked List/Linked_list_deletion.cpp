#include <iostream>
#include "Node.cpp"
using namespace std;
void deleteElement(Node *&head, int position)
{
    Node *temp = head;
    if (position == 0)
    {
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        while (position != 1)
        {
            temp = temp->next;
            position--;
        }
        Node *nodetodelete = temp->next;
        temp->next = temp->next->next;
        delete nodetodelete;
    }
}
void printLinkedList(Node *&head)
{
    Node *a = head;
    if (a == NULL)
    {
        cout << endl;
        return;
    }
    else
    {
        cout << a->data << ' ';
        return printLinkedList(a->next);
    }
}
int main()
{
    Node *head = new Node(2);
    Node *second = new Node(3);
    Node *third = new Node(4);
    Node *fourth = new Node(2);
    Node *fifth = new Node(3);
    Node *sixth = new Node(4);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    printLinkedList(head);
    deleteElement(head, 5);
    printLinkedList(head);
}