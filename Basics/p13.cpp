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
   
    int n;
    printf("Enter the no. of element\n");
    scanf("%d",&n);


    int *ptr = (int*)malloc(n*sizeof(int)); //heap

    if(ptr == NULL)
    {
        printf("Error allocating memory\n");
        return 0;
    }

   for(int i = 0;i<n;i++)
   {
    printf("Enter the %d index element\n",i);
    scanf("%d",ptr+i);
   }

   for(int i = 0;i<n;i++)
   {
    printf("%d index Element : %d\n",i,ptr[i]);
   }

    free(ptr); // to allocate te memory
}