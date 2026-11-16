/*
    Stack
        :
        push()
        pop()
        top()
        empty()
        full()
        size()
*/

#include<iostream>
#include"stack.cpp"
using namespace std;

class Queue
{
    Stack st;

    public:
        void push(int data);
        void pop();
        int front();
        int back();
        int size();
        bool empty();
        bool full();
};

bool Queue::empty()
{
    if(st.empty() == true)
    {
        return true;
    }
    return false;
}


bool Queue::full()
{
    if(st.full() == true)
    {
        return true;
    }
    return false;
}

int Queue::size()
{
    return st.size();
}

void Queue::push(int data)
{
    if(full() == true)
    {
        cout<<"Queue Overflow"<<endl;
        return;
    }

    st.push(data);
}

void Queue::pop()
{
    if(empty() == true)
    {
        cout<<"Queue Underflow"<<endl;
        return;
    }

    Stack temp;
    while(st.empty() != true)
    {
        temp.push(st.top());
        st.pop();
    }

    temp.pop();


    while(temp.empty() != true)
    {
        st.push(temp.top());
        temp.pop();
    }
}

int Queue::front()
{
    if(empty() == true)
        {
            cout<<"Queue Underflow"<<endl;
            return -1;
        }

        Stack temp;
        while(st.empty() != true)
        {
            temp.push(st.top());
            st.pop();
        }

        int frnt = temp.top();


        while(temp.empty() != true)
        {
            st.push(temp.top());
            temp.pop();
        } 

        return frnt;
}

int Queue::back()
{
    if(empty() == true)
    {
        cout<<"Queue Underflow"<<endl;
        return -1;
    }

    return st.top();
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

    q.push(60);

    cout<<"Front Element : "<<q.front()<<endl;
    cout<<"Back Element : "<<q.back()<<endl;

    return 0;
}
