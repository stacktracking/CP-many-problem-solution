#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;cin>>s;
    sort(s.begin(),s.end());
    vector<string>v;
    v.push_back(s);
    while(next_permutation(s.begin(),s.end()))
    {
        v.push_back(s);
    }
    cout<<v.size()<<endl;
    for(string u : v)
    {
        cout<<u<<endl;
    }
    return 0;
}