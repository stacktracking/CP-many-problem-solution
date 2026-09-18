#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n = s.size();
    bool flag = false;
    for(int i = 0 ; i<=n-2;i++)
    {
        if(s[i]=='s' && s[i+1]=='s') //solution
        {
            flag = true;
            break;
        }else{
            flag = false;
        }
    }
    if(flag)
    cout<<"hiss"<<endl;
    else
    cout<<"no hiss"<<endl;
    return 0;
}