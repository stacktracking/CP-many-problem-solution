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
        int n,x;
        cin>>n>>x;
        string s;
        cin>>s;
        bool flag = true;
        int rem= 0;
        for(char c : s)
        {
            if(c=='1')
            {
                rem=x;
            }else{
                if(rem<=0)
                {
                    flag = false;
                    break;
                }
                rem--;
            }

        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}