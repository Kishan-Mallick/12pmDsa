/*
    STl

    Set Containerset will always store the unique element no duplicate

    Assciative container -> set -> order -> assending order
    Unordered Assciative container -> unordered set -> without order

    set<int> st; -> #include<set>

    unordered_set<int> st; -> #include<unoreded_set>

    insert()
    erase()
    find() -> if element not found it return rnd iterator
    begin()
    end()
    

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st;

    st.insert(5);
    st.insert(10);
    st.insert(11);
    st.insert(7);
    st.insert(10);
    st.insert(5);

    for(auto elem : st)
    {
        cout<<elem<<"  ";
    }
    cout<<endl;

     if(st.find(5) == st.end())
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<"Element found"<<endl;
    }

    st.erase(5);

    for(auto elem : st)
    {
        cout<<elem<<"  ";
    }
    cout<<endl;

    if(st.find(5) == st.end())
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<"Element found"<<endl;
    }
}