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
        string s;
        cin>>s;
        int l=0,r=0;
       
        for(int i = 0 ; i < n ;i++)
        {
            
            if(s[i]=='B')
            {
                l = i+1;
                break;
            }
        }
        for(int i =n-1;i>=0;i--)
        {
            if(s[i]=='B')
            {
                r = i+1;
                break;
            }
        }
        
        if(l==0 && r==0)
        {
            cout<<0<<endl;
        }else if(l==r)
        {
            cout<<1<<endl;
        }else{
            cout<<(r-l)+1<<endl;
        }
    }
    return 0;
}