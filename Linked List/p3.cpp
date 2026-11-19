#include<iostream>
using namespace std;


class Node
{
    public:
        int data;
        Node *next;

        Node()
        {
            next = NULL;
        }
};

class LinkedList
{
    public:
        Node *head;

    LinkedList()
    {
        head = NULL;
    }

    void push_front(int d);
    void printList();
    void deleteNode(int d);
    void search(int d);

};

void LinkedList::search(int d)
{
    Node *cur = head;
    while(cur != NULL)
    {
        if(cur->data == d)
        {
            cout<<"Element Found"<<endl;
            return;
        }
        cur = cur->next;
    }

    cout<<"Elemrnt Not found"<<endl;
}

void LinkedList::push_front(int d)
{
    Node *temp = new Node;
    temp->data = d;
    
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}

void LinkedList::printList()
{

    Node *cur = head;
    while(cur != NULL)
    {
        cout<<cur->data<<endl;
        cur = cur->next;    
    }
}


int main()
{
    LinkedList sll;
    sll.push_front(10); 
    sll.push_front(20);
    sll.push_front(30);
    sll.push_front(15);
    sll.push_front(18);

    sll.printList();
    

}