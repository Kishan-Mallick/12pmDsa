//class template

#include<iostream>
using namespace std;


template<typename t1,typename t2>
class Student
{
    public:
        t1 name;
        t2 rollNo;

        Student(string n,t r)
        {
            name = n;
            rollNo = r;

            cout<<"name : "<<name<<endl;
            cout<<"Roll No : "<<rollNo<<endl; 

        }
};

int main()
{
    Student<string,int> s1("kishan",22);

    Student<string,string> s2("kishan","1028cs171038");
}