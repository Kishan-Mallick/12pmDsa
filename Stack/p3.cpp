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
#include<stack>
using namespace std;



int main()
{
    stack<int> st;
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