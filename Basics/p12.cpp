/*
    Dynamic memory Allocation :- help to allocate memory into the heap. once the memory is allocated it is devloper resposibilty to deallocate the unused memory

    Garbage collector

    #include<stdlib.h>

    malloc() - help to allocate the memory into heap

    syntax: 
        malloc(size in bytes)

        malloc allocates the requested memory and return the base address of it.

        malloc return the generic pointer.

        if the sufficient memory is not avilable it return the NULL pointer

    calloc() -

    realloc() -

    free() -

    new

    delete
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 10; //stack

    int *ptr = (int*)malloc(sizeof(int)); //heap

    if(ptr == NULL)
    {
        printf("Error allocating memory\n");
        return 0;
    }

    *ptr = 20;

    free(ptr); // to allocate te memory
}