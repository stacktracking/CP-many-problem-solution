#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll; 
    int marks;

};

int main()
{
    int t;
    cin>>t;
    Student arr[t];
    
for(int i=0;i<t;i++)
{
    cin>>arr[i].name>>arr[i].roll>>arr[i].marks;

}
for(int i=0;i<t;i++)
{

    cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks<<endl;
}


    return 0;
}