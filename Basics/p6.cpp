/*
    Pointers : Pointers are the special variable that can store the address of another variable

    choose same datatype whose address is being store.

    variable : conatiner that can store the data. Another name for memory allocation.

    Declare a variabe:
        datatype variableName;

        Datatype variableName = value;

        Datatype *pointerName = value;

        Dereferance operator : (*)

        Double Pointer - Pointer to pointer
        It is a special pointer that can store address of another pointer

        Types of pointer

        Wild pointer : pointer which is just declared but never intialized not even to NULL.


        int *ptr;

        NULL Pointer :- A pointer which is inytialised to NULL not a valid address.

        int *ptr = NULL;

        void Pointer : It is generic pointer that can store any address and can be type casted.

        void *ptr = &a;

        dangling pointer :  A pointer whose memory is either freed or deleted.

        smart pointer
        function pointer
*/

#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    int **pt = &ptr;

    int ***p = &pt;

    cout<<"Value of a : "<<a<<endl;
    cout<<"Address of a : "<<&a<<endl;

    cout<<"Value of ptr : "<<ptr<<endl;
    cout<<"Address of ptr : "<<&ptr<<endl;

    cout<<"Value of a using ptr : "<<*ptr<<endl;

    *ptr = *ptr + 1;

    cout<<"Value of a : "<<a<<endl;

    cout<<"Value of pt : "<<pt<<endl;
    cout<<"Address of pt : "<<&pt<<endl;

    **pt = **pt + 5;
    cout<<"Value of a : "<<a<<endl;

    cout<<"Value of p : "<<p<<endl;
    cout<<"Address of pt : "<<&p<<endl;

    cout<<***p<<endl;

}