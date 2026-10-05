#include<stdio.h>

void increment(int *ptr,int size)
{
     printf("Access array element inside increment function\n");

    for(int i = 0;i<5;i++)
    {
        ptr[i] = ptr[i] + 1;
        printf("%d\t",ptr[i]);
    }
    printf("\n");

}
int main()
{
    int arr[5] = {19,21,22,17,13};
    int size = 5;

    printf("Access array element\n");

    for(int i = 0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\n");

    increment(arr,size);

    printf("Access array element\n");

    for(int i = 0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\n");
   
}
