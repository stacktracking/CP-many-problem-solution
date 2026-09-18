#include<bits/stdc++.h>
using namespace std;
class Edge
{
    public:
     int v,u;
     long long int w;
     Edge(int u,int v , long long int w)
     {
        this->u = u;
        this->v = v;
        this->w = w;
     }
};

int main()
{
    int n,m;
    cin>>n>>m;
    long long int dis[n+1];
    vector<Edge>edge_list;
    while(m--)
    {
        int v,u;
        long long int w;
        cin>>u>>v>>w;
        edge_list.push_back({u,v,w});
    }
    int s;
    cin>>s;
    for(int i =1 ;i<=n ;i++)
    {
        dis[i] = LLONG_MAX;
    }
    dis[s] = 0;

    for(int i = 1; i<=n-1 ;i++ )
    {
        for(Edge eg : edge_list)
    {
        int u,v;
        long long int c;
        u = eg.u;
        v = eg.v;
        c = eg.w;
        if(dis[u] !=LLONG_MAX && dis[u] + c < dis[v])
        {
            dis[v] = dis[u] + c;
        }
    }
    }
    
    bool cycle = false;
    
    for(Edge eg : edge_list)
    {
        int u,v;
        long long int c;
        u = eg.u;
        v = eg.v;
        c = eg.w;
        if(dis[u] !=LLONG_MAX && dis[u] + c < dis[v])
        {
          cycle = true;
          break;  
        }
    }
    if(cycle)
    {
        cout<<"Negative Cycle Detected"<<endl;
    }else{
        
        int q;
        cin>>q;
    while(q--)
    {
        int d;
        cin>>d;

        if(dis[d] == LLONG_MAX)
        cout<<"Not Possible"<<endl;
        else{
            cout<<dis[d]<<endl;
        }
        
    }
    }
    return 0;
}