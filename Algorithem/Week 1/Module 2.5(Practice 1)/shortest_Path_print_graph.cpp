#include<bits/stdc++.h>
using namespace std;
const int N = 100000+5;
vector<int>adj_list[N];
int vis[N];
int level[N];
int parent[N];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    
    while(!q.empty())
    {
        int par = q.front();
        q.pop();

        for(int child : adj_list[par])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level [child] = level[par] + 1;
                parent[child] = par;
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
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int src = 1,des = n;
    cin>>src>>des;
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    memset(parent,-1,sizeof(parent));
    bfs(src);
    vector<int>v;
    int node = des;
    while(node != -1)
    {
        v.push_back(node);
        node = parent[node];
    }
    reverse(v.begin(),v.end());
    
    if(vis[des]==true)
    {
        cout<<level[des]+1<<endl;
    for(int x : v)
    {
        cout<<x<<" ";
    }
    }else
    cout<<"IMPOSSIBLE";
    
    return 0;
}