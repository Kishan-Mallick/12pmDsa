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
    Node *head;

    public:
        LinkedList()
        {
            head = NULL;
        }

        void push_front(int d);
        void push_back(int d);
        void printList();
        void deleteNode(int d);
        void search(int d);
};

void LinkedList::search(int d)
{
    Node *cur = head;

    if(head == NULL)
    {
        return;
    }

    if(head->data == d)
    {
        cout<<"Element Found\n";
    }

    do
    {
        if(cur->data == d)
        {
            cout<<"Element found"<<endl;
            return;
        }
        cur = cur->next;    
    }while(cur != head);

    cout<<"Element npt found"<<endl;
    return;
}

void LinkedList::printList()
{
    Node *cur = head;

    if(head == NULL)
    {
        return;
    }

    do
    {
        cout<<cur->data<<"-->";
        cur = cur->next;    
    }while(cur != head);

    cout<<endl;
}

void LinkedList::push_back(int d)
{
    Node *temp = new Node;
    temp->data = d;

    if(head == NULL)
    {
        head = temp;
        head->next = head;
    }
    else
    {
        Node *cur = head;

        while(cur->next != head)
        {
            cur = cur->next;
        }

        temp->next = head;
        cur->next = temp;
    }
}

void LinkedList::push_front(int d)
{
    Node *temp = new Node;
    temp->data = d;

    if(head == NULL)
    {
        head = temp;
        head->next = head;
    }
    else
    {
        Node *cur = head;

        while(cur->next != head)
        {
            cur = cur->next;
        }

        temp->next = head;
        head = temp;
        cur->next = head;
    }
}

int main()
{
    LinkedList cll;

    cll.push_front(10);
    cll.push_front(20);
    cll.push_front(15);
    cll.push_front(25);
    cll.push_front(35);
    cll.push_back(32);

    cll.printList();

    cll.search(38);
    
    
}