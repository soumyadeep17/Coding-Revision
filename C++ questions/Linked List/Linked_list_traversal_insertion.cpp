#include <iostream>
#include "Node.cpp"
using namespace std;
// creation, insertion

void insertAthead(Node* &head,int val){
    Node *new_head = new Node(val);
    new_head->next = head;
    head = new_head;
}
void insertAtEnd(Node* &head ,int val){
    Node* temp = head;
    Node* new_end = new Node(val);
    while(temp->next!=NULL)
        temp= temp->next;
    temp->next = new_end;
}
int length(Node *&head)
{   Node* temp = head;
    int len = 0;
    while(temp!=NULL)
    {temp = temp->next;
    len++;}
    return len;
}
void insert(Node* & head,int val,int position){
    if (position == 0)
        return insertAthead(head,val);
    if (position >= length(head) -1)
        return insertAtEnd(head, val);
    else
    {
    Node *temp  = head;
    int count = 0;
    while(count != position-1)
    {
        temp = temp->next;
        count++;
    }
    Node * nodeToInsert = new Node(val);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    }
}
void printLinkedList(Node *&head)
{
    Node*a = head;
    if (a == NULL)
    {cout<<endl;
    return;}
    else
    {
    cout << a->data << ' ';
    return printLinkedList(a->next);}
}

    int main()
    {
        Node *head = new Node(2);
        Node *second = new Node(head,3);
        Node *third = new Node(second,4);
        printLinkedList(head);
        insert(head,100,0);
        printLinkedList(head);
        return 0;
    }