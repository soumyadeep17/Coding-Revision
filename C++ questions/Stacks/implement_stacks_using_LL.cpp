#include <iostream>
#include<C:\\Users\\maths\\Documents\\C Revision\\C++ questions\\Linked List\\Node.cpp>
using namespace std;
// stack implementation using LL
class stack 
{
    // properties
public:
    Node *head;
    Node *temp_head;
    int count;
    // behaviour
    stack() // constructor
    {
        this->head = new Node;
        temp_head = head;
        count = 0;
    }
    void push(int x)
    {
        head->next = ++head;
        head->data = x;
        head->next = NULL;
        count++; 
    }
    void pop()
    {
        if (head==temp_head)
            cout<<"Empty";
        else
        {
            head--;
            head->next = NULL;
            count--;
        }
    }
    int peek()
    {
        if (temp_head == head)
        {
            cout<<"Empty"<<endl;
            return -1;
        }
        else
            return head->data;
    }
    int size()
    {
        return count;
    }
    bool isEmpty()
    {
        if(temp_head == head)
            return true;
        else
            return false;
    }
    void print()
    {
        while(head!=temp_head)
        {
            cout<<head->data<<endl;
            head--;
        }
    }
};
int main()
{
    // Node *head = Node(3);
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    // cout<<s.peek()<<endl;
    // s.pop();
    // cout<<s.peek()<<endl;
    // cout<<s.size()<<endl;
    // s.pop();
    // cout<<s.peek()<<endl;
    // cout<<s.size()<<endl;
    s.print();
}