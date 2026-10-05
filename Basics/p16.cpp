/*
    new

    syntax new dataType

    multiple block 
        new datatype[size]
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int *ptr = new int[n];

    for(int i = 0;i<n;i++)
    {
        cout<<"Enter the "<<i<<" index Element"<<endl;
        cin>>ptr[i];
    }

    for(int i = 0;i<n;i++)
    {
        cout<<i<<" index : "<<ptr[i]<<endl;
    }

    delete(ptr); // dangling pointer..
}