#include<bits/stdc++.h>
using namespace std;
class Student
{
    public: 
    int num;

    Student(int num)
    {
    
        this->num = num;
    }
};
class cmp
{
    public:
    bool operator()(Student l ,Student r)
    {
    
        return l.num > r.num;
    }
};
int main()
{
    int t;
    cin>>t;
    priority_queue<Student,vector<Student>,cmp>pq;
    while(t--)
    {
        int num;

        cin>>num;
        Student obj(num);
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
            
            int num;
            cin>>num;
            Student obj1(num);
            pq.push(obj1);
            if(pq.empty())
            cout<<"Empty"<<endl;
            else
            cout<<pq.top().num<<endl;
            
        }else if(val == 1)
        {
            if(pq.empty())
            cout<<"Empty"<<endl;
            else
            cout<<pq.top().num<<endl;
        
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
                cout<<pq.top().num<<endl;
        
                }
            }
            
    }

    return 0;
}