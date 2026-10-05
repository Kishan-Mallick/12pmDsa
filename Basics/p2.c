/*
    Dataype 
    variable
    operators _> bitwise operator
    conditional statment
    Loops
    Pointers
    function
    user defined datatype
    OOps -> class object constructors Accessmodifiers
    Templates
    STL

    Pointers :-

*/
#include<stdio.h>
int maxElement(int arr[],int size)
{
    int mx = arr[0];
        for(int i = 1;i<size;i++)
        {
            if(arr[i] > mx)
            {
                mx = arr[i];
            }
        }
        return mx;
}
int main()
{
    int arr[5] = {17,18,11,19,16};
    int size = 5;

    int mx = maxElement(arr,size);

    printf("%d",mx);
}