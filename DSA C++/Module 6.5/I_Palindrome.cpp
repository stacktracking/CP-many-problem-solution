#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int size_c=s.size();

    

    int temp=0;

    for(int i=0;i<size_c;i++)
    {
        if(s[i] !=s[size_c-i-1])
        {
             temp=1;
             break;
        }else if(s[i]==s[size_c-i-1])
        {
            temp=0;
        }
    }

    if(temp==1)
    {
        cout<<"NO";
    }else{
        cout<<"YES";
    }
    return 0;
}