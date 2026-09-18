#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int>v(26);

    for(char c:s )
    {
        v[c-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(v[i]>0)
        {
            cout<<char('a'+i)<< " : " <<v[i]<<endl;
        }
        
    }
    return 0;
}