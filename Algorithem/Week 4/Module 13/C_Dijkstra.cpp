#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<pair<ll,ll>>adj_list[100005];
ll dis[100005];
ll parent[100005];
void dijkstra(ll src)
{
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
    pq.push({0,src});
    dis[src] = 0;

    while(!pq.empty())
    {
        pair<ll,ll> par = pq.top();
        pq.pop();

        ll node_dis = par.first;
        ll par_node = par.second;

        for(auto child : adj_list[par_node])
        {
            ll child_dis = child.first;
            ll child_node = child.second;

            if(node_dis + child_dis < dis[child_node])
            {
                dis[child_node] = node_dis+child_dis;
                pq.push({dis[child_node],child_node});
                parent[child_node] = par_node;
            }
        }
    }
}
int main()
{
    ll n,m;
    cin>>n>>m;
    while(m--)
    {
        ll a,b,w;
        cin>>a>>b>>w;
        adj_list[a].push_back({w,b});
        adj_list[b].push_back({w,a});
    }
    for(ll i = 1 ; i<=n ; i++)
    {
        dis[i] = LLONG_MAX;
        parent[i] = -1;
    }

    dijkstra(1);

    if(dis[n] == LLONG_MAX)
    {
        cout<<-1<<endl;
    }else{
        ll node = n;
        vector<ll>path;
        while(node !=-1)
        {
            path.push_back(node);
            node = parent[node];
        }
        reverse(path.begin(),path.end());
    for(auto x : path)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    }
    
    return 0;
}