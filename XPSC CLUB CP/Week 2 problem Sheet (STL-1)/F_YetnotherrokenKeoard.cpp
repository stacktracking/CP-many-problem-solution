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
        string s;
        cin>>s;
        string result =" ";
        int sm=0,cp=0;
        for(int i = s.size()-1;i>=0;i--)
        {
            if(s[i]=='b')
            {
                sm++;
            }else if(s[i]=='B')
            {
                cp++;
            }else if (s[i]>='a' && s[i]<='z')
            {
                if(sm>0)
                sm--;
                else
                result.push_back(s[i]);
            }else if (s[i]>='A' && s[i]<='Z')
            {
                if(cp>0)
                cp--;
                else
                result.push_back(s[i]);
            }
            
        }
        reverse(result.begin(),result.end());
        cout<<result<<endl;
    }
    return 0;
}

