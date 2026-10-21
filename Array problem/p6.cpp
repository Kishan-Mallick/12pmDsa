/*

    MAP-> map store the data in {key,vlaue} where every key is unique


    Associative Container -> Map -> {key,vlaue} soted way -> O(log n) for serching insertion 
    #include<map>


    Unordered Assocuiatve container -> unordered map -> {key,vlaue} -> unordered 
    #include<unordered_map> -> O(1)

    insert()
    erase()
    find() -> if the key is not present it return end iterator.

    Iterator
    begin()
    end()
    for each loop

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string,int> mp = {{"Rahul",5000},{"Raj",7000}};

    mp.insert({"yami",15000});
    mp.insert({"Raman",15000});

    for(auto elem : mp)
    {
        cout<<elem.first<<"  "<<elem.second<<endl;
    }

    cout<<mp["yami"]<<endl; // only when you know the key is present to get its value

    mp.erase("yami");

    for(auto elem : mp)
    {
        cout<<elem.first<<"  "<<elem.second<<endl;
    }

    if(mp.find("yami") != mp.end())
    {
        cout<<"Value is present"<<endl;
    }
    else
    {
        cout<<"Value is not present"<<endl;
    }

}