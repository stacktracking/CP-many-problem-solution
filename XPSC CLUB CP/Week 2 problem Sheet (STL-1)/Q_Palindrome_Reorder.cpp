#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,first_s,mid_s,last_s;
    cin>>s;
    map<char,int>mp;
    int cnt_odd=0;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    for(auto it: mp)
    {
        if(it.second%2!=0)
        cnt_odd++;
    }
    if(cnt_odd>1)
    {
        cout<<"NO SOLUTION"<<endl;
        
    }else{
        for(auto it : mp)
        {
            if(it.second%2==0)
            {
                for(int i=0;i<it.second/2;i++)
                {
                    first_s.push_back(it.first);
                    last_s.push_back(it.first);
                }
            }else{
                for(int i=0;i<it.second;i++)
                mid_s.push_back(it.first);
            }
            
        }
        reverse(last_s.begin(),last_s.end());
        cout<<first_s+mid_s+last_s<<endl;
    }
    return 0;
}