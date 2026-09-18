#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[10005];
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        if(adj_list[x].empty())
        {
            cout<<"-1"<<endl;
        }
        else
        {
            vector<int>rev = adj_list[x];
            sort(rev.rbegin(),rev.rend());

            for(int x : rev)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}