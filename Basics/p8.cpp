/*
    Array : A collection of similar type of data

    Array is a linear datastructure.

    Array name carry the base address.

    Avantages:-
        Continious memory allocation - array have index
        - start from 0.

        access o(1) T.C

        Disadvantages :
            Fixed size
            insertion and deletion

    Depand on size
        fixed size static Array
            int arr[5];

        Dynamic Sized Array: grow its size at runtime.
            Vector

    Depand on dimession
        1d array
        multi demisonal
*/
#include<stdio.h>
int main()
{
    int arr[5] = {19,21,22,17,13};

    int *ptr = arr;
    printf("Access array element\n");

    for(int i = 0;i<5;i++)
    {
        printf("%d\t",ptr[i]);
    }

    printf("\n");
   
}