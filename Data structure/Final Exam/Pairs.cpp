#include<bits/stdc++.h>
using namespace std;

    
    bool cmp(pair<string,int> &l , pair<string,int> &r)
    {
        if(l.first == r.first)
         return l.second > r.second;
        else
            return l.first < r.first;
    }

int main()
{
    int n;
    cin>>n;
vector<pair<string,int>>v;

    for(int i = 0 ; i<n ; i++)
    {
        string name;
        int val;
        cin>>name>>val;
        v.push_back({name,val});
    }

    sort(v.begin(),v.end(),cmp);

    for (int i = 0; i<n ; i++) 
    {
        cout << v[i].first << " " << v[i].second <<endl;
    }

    return 0;
}