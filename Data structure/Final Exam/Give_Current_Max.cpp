#include<bits/stdc++.h>
using namespace std;
class Student
{
    public: 
    string name;
    int roll;
    int marks;

    Student(string name,int roll,int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp
{
    public:
    bool operator()(Student l ,Student r)
    {
        if(l.marks == r.marks)
        return l.roll>r.roll;
        else
        return l.marks < r.marks;
    }
};
int main()
{
    int t;
    cin>>t;
    priority_queue<Student,vector<Student>,cmp>pq;
    while(t--)
    {
        string name;
        int roll,marks;

        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        pq.push(obj);
    }
    int n;
    cin>>n;
    while(n--)
    {
        int val;
        cin>>val;

        if(val == 0)
        {
            string name;
            int roll,marks;
            cin>>name>>roll>>marks;
            Student obj1(name,roll,marks);
            pq.push(obj1);
            if(pq.empty())
            cout<<"Empty"<<endl;
            else
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            
        }else if(val == 1)
        {
            if(pq.empty())
            cout<<"Empty"<<endl;
            else
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        
        }else if( val == 2)
        {
             if(pq.empty())
            cout<<"Empty"<<endl;
            else
            {
                pq.pop();
                if(pq.empty())
                cout<<"Empty"<<endl;
                else
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        
                }
            }
            
    }

    return 0;
}