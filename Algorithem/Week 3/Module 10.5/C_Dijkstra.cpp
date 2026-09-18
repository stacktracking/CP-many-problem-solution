#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v[100005];
int dis[100005];
int short_node[100005];
void dijkstra(int src)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

    pq.push({0,src});
    dis[src] = 0;
    short_node[src] = 0;
    while(!pq.empty())
    {
        pair<int,int> par = pq.top();

        int cost = par.first;
        int par_node = par.second;

        for(auto child : v[par_node])
        {
            int child_cost = child.first;
            int child_node  = child.second;

            if(cost + child_cost < dis[child_node])
            {
                dis[child_node] = cost + child_cost ;
                pq.push({dis[child_node],child_node});
                
            }
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;

    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }

    for(int i = 0 ; i<n ; i++)
    {
        dis[i] = INT_MAX ;
    }
    dijkstra(1);
    return 0;
}