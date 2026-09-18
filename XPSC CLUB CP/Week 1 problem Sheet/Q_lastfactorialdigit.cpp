#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int fact =1;
        for(int i =1 ; i<=n;i++)
        {
            fact *= i;
        }
        string s;
        s=to_string(fact);
        if(fact >= 10)
        cout<<s[s.size()-1]<<endl; //solution
        else
        cout<<fact<<endl;
    }
    return 0;
}