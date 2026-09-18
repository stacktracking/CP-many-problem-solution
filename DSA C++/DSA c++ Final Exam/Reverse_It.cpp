#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int id;
    string s;
    int marks;

    void display()
    {
          cout<<name<<" "<<id<<" "<<s<<" "<<marks<<endl;
    }

};

int main()
{
    int t;
    cin>>t;

    
        Student arr[t];

        
    

        for(int i=0;i<t;i++)
        {
            cin>>arr[i].name>>arr[i].id>>arr[i].s>>arr[i].marks;
        }

        Student section[t];

        for(int i=0;i<t/2;i++)
        {
          swap(arr[i].s,arr[t-1-i].s);
        }

        for(int i=0;i<t;i++)
        {
            arr[i].display();
        }
    
    
    return 0;
}