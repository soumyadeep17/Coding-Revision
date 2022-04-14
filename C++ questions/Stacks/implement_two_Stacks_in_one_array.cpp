#include <iostream>
using namespace std;

// top1 --> -1 
// top2 --> Size of arr
// stack implementation using array
class stack 
{
    // properties
public:
    int top1;
    int top2;
    int *arr;
    int capacity;
    // behaviour
    stack(int capacity) // constructor
    {
        this->capacity = capacity;
        arr = new int[capacity];
        top1 = -1;
        top2 = capacity;
    }
    void push1(int x)
    {
    if (top2 - top1 == 1)
        cout<<"No Space";
    else
        arr[++top1] = x;
    }
    void push2(int x)
    {
    if (top2- top1 == 1)
        cout<<"No Space";
    else
        arr[--top2] = x;
    }
    void pop1()
    {
        if (top1>=0)
            top1--;
        else
            cout<<"stack underflow";
    }
    void pop2()
    {
        if (top2<capacity)
            top2++;
        else
            cout<<"stack underflow";
    }
    int peek1()
    {
        if (top1>=0)
            return arr[top1];
        else
        {
        cout<<"empty";
        return -1;
        }
    }
    int peek2()
    {
        if (top2<capacity)
            return arr[top2];
        else
        {
        cout<<"empty";
        return -1;
        }
    }
    int size1()
    {
        return top1+1;
    }
    int size2()
    {
        return capacity - top2;
    }

    bool isEmpty1()
    {
        if(top1 <= -1)
            return true;
        else
            return false;
    }
    bool isEmpty2()
    {
        if(top2 >= capacity)
            return true;
        else
            return false;
    }
};
int main()
{
    stack s(5);
    s.push1(1);
    s.push1(2);
    s.push2(3);
    s.push2(89);
    s.push2(1100);
    // s.push1(2);
    cout<<s.peek1()<<endl;
    s.pop1();
    cout<<s.peek1()<<endl;
    // cout<<s.capacity;
}