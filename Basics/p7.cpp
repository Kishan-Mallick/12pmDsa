/*
    memory Leak
*/

#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;


    printf("Value of ptr : %d\n",ptr);

    ptr = ptr - 2;

    printf("Value of ptr : %d\n",ptr);

}