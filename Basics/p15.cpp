/*
    Dynamic memory Allocation :- help to allocate memory into the heap. once the memory is allocated it is devloper resposibilty to deallocate the unused memory

    Garbage collector

    #include<stdlib.h>

    malloc() - help to allocate the memory into heap

    malloc return single block of requested memory

    syntax: 
        malloc(size in bytes)

        malloc allocates the requested memory and return the base address of it.

        malloc return the generic pointer.

        if the sufficient memory is not avilable it return the NULL pointer

    calloc() - help to allocate the memory into heap
    calloc return multple block of requested memory

    calloc is slow

        synatx:
            calloc(no of block,size of each block)

            callpc allocates the requested memory and return the base address of it.

            calloc return the generic pointer.

            if the sufficient memory is not avilable it return the NULL pointer

    realloc() - realloc allocates the new memory for previously requested memory

    relloc(previousPointerAddress,newSize in bytes)

    realloc allocates the requested memory and return the base address of it.

    realloc return the generic pointer.

    if the sufficient memory is not avilable it return the NULL pointer

    if the extra memory is avilable next to previous memory it extent that memory. if not it create a fresh new memory and copy the existing data.

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
    scanf("%d",&n);//5


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

   int num;
   printf("Enter the new no. of element\n");
   scanf("%d",&num);//8

   ptr = (int*)realloc(ptr,num*sizeof(int));

    if(ptr == NULL)
    {
        printf("Error allocating memory\n");
        return 0;
    }

     for(int i = n;i<num;i++)
    {
        printf("Enter the %d index element\n",i);
        scanf("%d",ptr+i);
    }

    for(int i = 0;i<num;i++)
    {
        printf("%d index Element : %d\n",i,ptr[i]);
    }

    free(ptr); // to allocate te memory
}