#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
   
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(26, 0),v1(26,0);
        string s,s1;
        cin>>s>>s1;
        bool flag=true;
        for(char c : s)
        {
            v[c-'a']++;
        }
        for(char c: s1)
        {
            v1[c-'a']++;
        }
        if(v==v1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}