#include <iostream>
using namespace std;
// nahi kia implement mene
// front --> 0 
// rear
// enqueue-->push
// dequeue-->pop
// stack implementation using array
class queue 
{
    // properties
public:
    int front;
    int rear;
    int *arr;
    int capacity;
    // behaviour
    queue(int capacity) // constructor
    {
        this->capacity = capacity;
        arr = new int[capacity];
        front = 0;
        rear = 0;
    }
    void enqueue(int x)
    {
    if (rear == capacity)
        cout<<"No Space";
    else
        arr[rear++] = x;
    }
    void dequeue()
    {
        if (front == rear)
            cout<<"Empty"<<endl;
        else
            front++;
            if(front == rear)
            {
                front = 0;
                rear = 0;
            }

    }
    int first()
    {
        if (front == rear)
            return -1;
        else
            return arr[front];
    }
    int size()
    {
        return (rear-front);
    }

    bool isEmpty()
    {
        if(front == rear)
            return true;
        else
            return false;
    }
};
int main()
{
    queue s(5);
    s.enqueue(1);
    s.enqueue(2);
    s.enqueue(3);
    cout<<s.first()<<endl;
    s.dequeue(); 
    s.dequeue();
    cout<<s.first()<<endl;
}