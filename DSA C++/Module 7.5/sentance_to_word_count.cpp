#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string x;
    cin>>x;

    int n=s.size();
    int count=0;

    // cout<<s<<endl;
    // cout<<x;

    for(int i=0;i<n;i++)
    
    {
        if(s[i]=='j' && s[i+1]=='o' && s[i+2]=='h' && s[i+3]=='n')
        {
            count++;
        }
    }

    cout<<count;
    return 0;
}