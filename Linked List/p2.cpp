/*Single Linked List

STL -> forward list -> push_front
*/

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

int main()
{
    //malloc calloc realloc free new delete
    //new dataType

    Node *temp1 = new Node;

    Node *temp2 = (Node*)malloc(sizeof(Node));

    Node *temp3 = (Node*)malloc(sizeof(Node));

    Node *temp4 = new Node;

    temp1->data = 10;
    temp2->data = 15;
    temp3->data = 12;
    temp4->data = 19;

    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;


    Node *cur = temp1;

    while(cur != NULL)
    {
        cout<<cur->data<<endl;
        cur = cur->next;    
    }

    return 0;

}