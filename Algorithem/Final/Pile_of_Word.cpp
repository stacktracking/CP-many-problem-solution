#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    bool flag = false;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int n = s1.size(),m=s2.size();
        
        if(n != m)
        {
            cout<<"NO"<<endl;
            continue;
        }

        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        if(s1 == s2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    
    }
    return 0;
}