#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int n=s.size();

    string c;

for(int i=0;i<n;i++)
    {
        if(s[i]=='E' && s[i+1]=='G' && s[i+2]=='Y' && s[i+3]=='P' && s[i+4]=='T')
        {
            c +=' ';
            i +=4;
        }else{
            
            c +=s[i];
        
        }
    }
    cout<<c;
    return 0;
}