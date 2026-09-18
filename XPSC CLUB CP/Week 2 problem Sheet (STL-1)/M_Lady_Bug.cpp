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
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        a='#'+a;
        b='#'+b;
        int cntA_even_one=0,cntB_odd_zero=0,cntB_even_zero=0,cntA_odd_one=0;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                if(a[i]=='1')
                {
                    cntA_even_one++;
                }
                if(b[i]=='0')
                {
                    cntB_even_zero++;
                }
            }else{
                if(b[i]=='0')
                {
                    cntB_odd_zero++;
                }
                if(a[i]=='1')
                {
                    cntA_odd_one++;
                }
            }
        }
        if(cntA_even_one<=cntB_odd_zero && cntA_odd_one<=cntB_even_zero)
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}