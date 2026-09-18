#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int cls;
    char section;
    long long id; 
    int marks_math,marks_eng;

   
};
bool cmp(Student l, Student r)
{
    if(l.marks_eng !=r.marks_eng)
    {
        return l.marks_eng>r.marks_eng;

    }else if(l.marks_math !=r.marks_math)
    {
        return l.marks_math>r.marks_math;
    }
    else{

        return  l.id<r.id; 
    }


}

int main()
{
    int t;
    cin>>t;
    Student arr[t];
    
for(int i=0;i<t;i++)
{
    cin>>arr[i].name>>arr[i].cls>>arr[i].section>>arr[i].id>>arr[i].marks_math>>arr[i].marks_eng;

}
sort(arr,arr+t,cmp);
for(int i=0;i<t;i++)
{

    cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].section<<" "<<arr[i].id<<" "<<arr[i].marks_math<<" "<<arr[i].marks_eng<<endl;
}


    return 0;
}