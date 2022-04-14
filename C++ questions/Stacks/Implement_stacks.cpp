#include <iostream>
using namespace std;

// top --> -1 
// stack implementation using array
class stack 
{
    // properties
public:
    int top = -1;
    int *arr;
    int capacity;
    // behaviour
    stack(int capacity) // constructor
    {
        this->capacity = capacity;
        arr = new int[capacity];
        top = -1;
    }
    void push(int x)
    {
    if (top == capacity -1)
        cout<<"No Space";
    else
        arr[++top] = x;
    }
    void pop()
    {
        if (top>=0)
            top--;
        else
            cout<<"stack underflow";
    }
    int peek()
    {
        if (top>=0)
            return arr[top];
        else
        {
        cout<<"empty";
        return -1;
        }
    }
    int size()
    {
        return top+1;
    }

    bool isEmpty()
    {
        if(top <= -1)
            return true;
        else
            return false;
    }
};
int main()
{
    stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(89);
    s.push(1100);
    s.push(2);
    cout<<s.peek()<<endl;
    cout<<s.size()<<endl;
    cout<<s.capacity;
}