#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll; 
    int marks;

};
bool cmp(Student l, Student r)
{
    if(l.marks>r.marks)
    {
        return true;
    }else if(l.marks<r.marks)
    {
        return false;
    }
    else{

        if(l.roll<r.roll)
        {
            return true;
        }else{
             return false;
        }

       
    }
    // if,else ta Ternary Operator diye o korte pari :
    // variable = (condition) ? expressionTrue : expressionFalse;
    // return (l.marks==r.marks) ?  l.roll<r.roll :  l.marks>r.marks;

   
}

int main()
{
    int t;
    cin>>t;
    Student arr[t];
    
for(int i=0;i<t;i++)
{
    cin>>arr[i].name>>arr[i].roll>>arr[i].marks;

}
sort(arr,arr+t,cmp);
for(int i=0;i<t;i++)
{

    cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks<<endl;
}


    return 0;
}