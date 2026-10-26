/*
    Stack is a linear data structure that follow the peinciple of LIFO.

    Last in First Out

    inserion and deletion from same end

    stack -> 

    Fixed size Stack -> Array

    Dynamic sized stack -> vector , Linked List

    STL -> Container Adapter -> Stack
    #include<stack>

    Operation On Stack

    -> Push() -> insert elemnt to stack
    -> pop() -> remove the top element
    -> Top() -> return the top element
    -> empty() -> return true if stack is empty
    -> size() -> return no of element present in stack
    -> full() -> return true if stck is full.
*/

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


int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    cout<<"Stack Top Element : "<<st.top()<<endl;

    st.pop();

    cout<<"Stack Top Element : "<<st.top()<<endl;

    st.push(60);

    cout<<"Stack Top Element : "<<st.top()<<endl;

    while(st.empty() != true)
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}