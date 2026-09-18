#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    multiset<int>ml;
    for(int i=0;i<n;i++)
    {
        int h;
        cin>>h;
        ml.insert(h);
    }
    for(int i=0;i<m;i++)
    {
        int p;
        cin>>p;

        auto it = ml.upper_bound(p);
        if(it == ml.begin())
        {
            cout<<-1<<endl;
        }else{
            it--;
            cout<<*it<<endl;
            ml.erase(it);
        }
    }
    return 0;
}