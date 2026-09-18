#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int cnt =1;
    while(t--)
    {
        string s;
        cin>>s;

        if(cnt%2 !=0) // code main part
        {
            cout<<s<<endl;
        
        }
        cnt++;
    }
    return 0;
}