/*
    Call by referance : - changes made by formal parameter does  effect actual paramter

    -> formal parameter recived the address of actual parameterr
*/

#include<stdio.h>
void increment(int *a)
{
    *a = *a + 1;
    printf("Value of a in increment function : %d\n",*a);
}
int main()
{
    int a = 10;

    printf("Value of a : %d\n",a);


    increment(&a);

    printf("Value of a : %d\n",a);
}