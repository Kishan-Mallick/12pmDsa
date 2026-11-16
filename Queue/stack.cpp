#include<iostream>
#define cap 5
using namespace std;

class Stack
{
    int arr[cap];
    int count;

    public:
        void push(int data);
        void pop();
        int top();
        bool empty();
        bool full();
        int size();

        Stack()
        {
            count = 0;
        }
};

int Stack::size()
{
    return count;
}

bool Stack::empty()
{
    if(count == 0)
    {
        return true;
    }
    return false;
}

bool Stack::full()
{
    if(count == cap)
    {
        return true;
    }
    return false;
}

void Stack::push(int data)
{
    if(full() == true)
    {
        cout<<"Stack Overflow"<<endl;
        return;
    }

    arr[count] = data;
    count++;
}

void Stack::pop()
{
    if(empty() == true)
    {
        cout<<"Stack Underflow"<<endl;
        return;
    }
    count--;
}


int Stack::top()
{
    if(empty() == true)
    {
        cout<<"Stack Underflow"<<endl;
        return -1;
    }

    return arr[count-1];
}