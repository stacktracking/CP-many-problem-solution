#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>adj_list[105];
int dis[105];

void dijkstra(int src)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0,src});
    dis[src] = 0 ;

    while(!pq.empty()) // O(v);
    {
        pair<int,int> par = pq.top();
        pq.pop(); // O(logV)

        int par_dis = par.first;
        int par_node = par.second;

        for(pair<int,int> child : adj_list[par_node]) //O(E);
    {
        int child_dis = child.first;
        int child_node = child.second;

        if(par_dis + child_dis < dis[child_node])
        {
            dis[child_node] = par_dis + child_dis;
            pq.push({dis[child_node],child_node}); //O(logV);
        }
    }

    }
}
// total complicity :  O(VlogV + ElogV) - > O ( logV(V + E)); 
int main()
{
    int n,m;
    cin>>n>>m;

    while(m--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adj_list[a].push_back({c,b});
        adj_list[b].push_back({c,a});
    }
    for(int i = 0 ;i < n ; i++)
        dis[i] = INT_MAX;
    dijkstra(0);

    for(int i = 0 ;i<n ; i++)
    {
        cout<<i<<"->";
        cout<<dis[i]<<" "<<endl;;
    }
    
    return 0;
} 