/*
    ArrayList in java
    JS - Array
    Python - List

    Vector in Cpp.


    STL -> Standard Template Library 

    Container
        (i) Sequence Container : array vector   list
        (ii) Container Adapter: stack queue priority Queue

        (iii) Associative Container : map set multimap multiset

        (iv) Unordered Associatve Container : unorderd_map unorderd_set unordered_multimap unordered_multiset

        Iterator

        Algorithm

        ---------------------------------------
        Vector is dynamically sized array which can grow its size.

        Vector double it size

        #include<vector>

        creation

            vector<int> arr; -> it creates a array of size 0.

            vector<int> arr(5); -> a vector of size 5

            vector<int> arr(7,9); -> a vector odf size of with default value 9.

            vector<int> arr = {17,18,19};

        push_back(data) -> isert the element into the vector end.

        size() -> it return the num of element present.

        capacity() -> num of element vector can hold.

        pop_back() -> removes the element from last.

        at(index) -> return the value at given index

        Iterator in vector: it is an pointer like object.

        vector<int>::iterator it;

        auto keyword - it automatically dedects the data type.

        vector<int>::iterator it;

        auto it;

        begin() -> it return the referance of the first element.

        end() -> it return the refernce of next to last element.


        #include<bits/stdc++.h> -> standard lib

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;

    cout<<"size : "<<arr.size()<<endl;
    cout<<"Capacity : "<<arr.capacity()<<endl;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    for(int i = 0;i<arr.size();i++)
    {
        cout<<arr.at(i)<<"\t";
    }
    cout<<endl;

    arr.pop_back();

    for(int i = 0;i<arr.size();i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

    // auto it = arr.begin();
    // cout<<*(it+1)<<endl;

    // auto itr = arr.end();
    // cout<<*(itr-1)<<endl;

    //print the array using iterator...
    cout<<"print the array using iterator..."<<endl;
    for(auto it = arr.begin();it != arr.end(); it++)
    {
        cout<<*it<<"\t";
    }
    cout<<endl;

    //for each loop
    cout<<"print the array using for each..."<<endl;
    for(auto e : arr)
    {
        cout<<e<<"\t";
    }
    cout<<endl; 
}