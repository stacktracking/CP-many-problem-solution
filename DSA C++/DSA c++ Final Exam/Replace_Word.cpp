#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    cin.ignore();

    while(t--)
    {
       string s,x;
       cin>>s>>x;
       int n=s.size();
       int m=x.size();

       string res= "";
       int i=0;

       while(i<n)
       {
        int temp=0;

        for(int j=0;j<m;j++)
        {
            if(i+j >=n || s[i+j] !=x[j])
            {
                temp=1;
                break;
            }
        }
        if(temp !=1)
        {
            res +="#";
            i +=m;
        }else{
            res +=s[i];
            i++;
        }
       }

    cout<<res<<endl;

    }
    return 0;
}