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

        int cnt1 = 0;
        int cnt2 = 0;
        for(int i = 0; i<n;i++)
        {
            if(s[i]=='1')
            {
                cnt1++;
            }
        }
        for(int i = 0 ; i<n ; i++)
        {
            if(s[i]=='1')
            cnt2 += cnt1 - 1;
            else
            cnt2 += cnt1 + 1;
        }
        cout<<cnt2<<endl;
    }
   
    return 0;
}