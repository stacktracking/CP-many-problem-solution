#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    bool dp[26];
    memset(dp,false,sizeof(dp));
    int val;
    for(int i = 0 ; i<s.size() ; i++)
    {
        val = s[i]-'a';
        dp[val] = true;
        
    }
    bool flag = true;
    char ch;
    for(int i = 0 ; i <26 ; i++)
    {
        if(dp[i] == 0)
        {
             ch = i+97;
            flag = true;
            break;
        }else{
            flag = false;
        }
    }
    if(flag)
    {
        cout<<ch<<endl;
    }else{
        cout<<"None"<<endl;
    }
    return 0;
}