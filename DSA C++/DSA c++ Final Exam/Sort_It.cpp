#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int cls;
    char section;
    int id; 
    int marks_math,marks_eng;

    int total_marks()
    {
        return marks_math+marks_eng;
    }

};
bool cmp(Student l, Student r)
{
    if(l.total_marks()==r.total_marks())
    {
        return l.id<r.id;
    }else{

        return  l.total_marks()>r.total_marks(); 
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