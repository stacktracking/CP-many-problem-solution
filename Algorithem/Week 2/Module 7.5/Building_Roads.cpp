#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[100005];
bool vis[100005];
vector<vector<int>>ans;

void dfs(int src,vector<int>&cmp)
{
    vis[src] = true;
     cmp.push_back(src);
    for(int child : adj_list[src])
    {
        
        
        if(!vis[child])
        {
           
            dfs(child,cmp);
        }
    }
}

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
    memset(vis,false,sizeof(vis));
    for(int i =1 ;i<=n;i++)
    {
        if(!vis[i])
        {
            vector<int>cmp;
            dfs(i,cmp);
            sort(cmp.begin(),cmp.end());
            ans.push_back(cmp);
        }
        
    }
        cout<<ans.size()-1<<endl;
    for(int i =0 ; i+1<ans.size();i++)
    {
        
        cout<<ans[i].back()<<" "<<ans[i+1].front()<<endl;
    }
    return 0;
}