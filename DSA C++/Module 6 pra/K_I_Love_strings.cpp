#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s,t;

    while(n--)
    {
        cin>>s>>t;

        int first=s.size();
        int second=t.size();

        int m=max(first,second);

        for(int i=0;i<m;i++)
            {
                if(i<first)
                {
                    cout<<s[i];
                }
                if(i<second)
                {
                    cout<<t[i];
                }
                
            }

            cout<<endl;

        }
    return 0;
}