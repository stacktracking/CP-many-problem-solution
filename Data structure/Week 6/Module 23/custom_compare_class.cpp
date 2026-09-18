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

    bool operator()(Student l , Student r)
    {
        if(l.marks > r.marks) return true; // ay khan moloto kaj kortece jar marks kom shei age asbe , kintu symbol ta ulta kore dite hoi ;
        else return false;
    }
};
int main()
{
    priority_queue<Student,vector<Student>,cmp>pq; // aita niya hoiyeche jar priority beshi take age rakhae jono ;
    int n;
    cin>>n;

    for(int i = 0; i<n ; i++)
    {
        string name;
        int roll,marks;

        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        pq.push(obj);
    }
    while(!pq.empty())
    {
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        pq.pop();
    }
    return 0;
}