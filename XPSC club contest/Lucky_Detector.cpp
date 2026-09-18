#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    s.resize(1e9);
    cin>>s;
    bool flag = true;
    for(int i = 0 ; i<s.size();i++)
    {
        if(s[i]=='7')
    {
        cout<<"Lucky";
        flag = true;
        break;
    }else{
        flag = false;
    }
    }
    if(flag == false)
    {
        cout<<"Not Lucky";
    }
    
    return 0;
}