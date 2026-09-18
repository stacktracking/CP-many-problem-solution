#include<bits/stdc++.h>
using namespace std;

void rec(string s)
{
    int n = s.size();

    for(int i = 0 ; i < n ; i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        rec(s);
    }
    return 0;
}