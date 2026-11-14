/*
    Queue in data structure:

    Queue is a linear data structure which work on the principle of FIFO.

    First In First Out

    Insertion and deletion takes from different end;

    Types of Queue

    (i) Normal Queue 
    (ii) Circular Queue
    (iii) Deque -> Doubly Ended Queue
    (iv) Priority Queue
            (a) Min Priority Queue
            (b) Max Priority Queue

    Operation on Queue:

        Push(data) - it help to insert the data into the Queue
        Pop() - it removes the first element of the queue
        front() - it return front element
        back() - it return the back element
        empty() - it return true if queue is empty
        full() - it return true if queue is full
        size() - it return the no of element present in queue

        Implementation of Queue using a fixed size array.
*/

#include<iostream>
#define cap 5
using namespace std;

class Queue
{
    int arr[cap];
    int frnt;
    int rear;

    public:
        Queue()
        {
            frnt = 0;
            rear = 0;
        }

        void push(int data);
        void pop();
        int front();
        int back();
        bool empty();
        bool full();
        int size();
};

bool Queue::empty()
{
    if(rear == 0)
    {
        return true;
    }
    return false;
}

bool Queue::full()
{
    if(rear == cap)
    {
        return true;
    }
    return false;
}

void Queue::push(int data)
{
    if(full() == true)
    {
        cout<<"Queue Overflow"<<endl;
        return ;
    }

    arr[rear] = data;
    rear++;
}

int Queue::back()
{
    if(empty() == true)
    {
        return -1;
    }

    return arr[rear-1];
}

int Queue::front()
{
    if(empty() == true)
    {
        return -1;
    }

    return arr[frnt];
}

void Queue::pop()
{
    if(empty() == true)
    {
        cout<<"Queue Undeflow"<<endl;
        return;
    }

    frnt++;
}

int Queue::size()
{
    return rear - frnt;
}

int main()
{
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.push(60);

    cout<<"Front Element : "<<q.front()<<endl;
    cout<<"Back Element : "<<q.back()<<endl;

    q.pop();

    cout<<"Front Element : "<<q.front()<<endl;
    cout<<"Back Element : "<<q.back()<<endl;

    cout<<"Total Element : "<<q.size()<<endl;

    q.push(60);
}