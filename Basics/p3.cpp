/*

    Function

    Templates:- A powerfull tool to write generic code.

    (i) Function Template
    (ii) Class templates
*/

#include<iostream>
using namespace std;

template<typename t>
t myMax(t a,t b)
{
    if(a > b)
    {
        return a;
    }
    return b;
}


int main()
{
    int a;
    int b;

    cout<<"Enter a "<<endl;
    cin>>a;
    cout<<"Enter b "<<endl;
    cin>>b;

    int ans = myMax<int>(a,b);
    cout<<ans<<endl;

    string res = myMax<string>("xyz","abc");

    cout<<res<<endl;

}