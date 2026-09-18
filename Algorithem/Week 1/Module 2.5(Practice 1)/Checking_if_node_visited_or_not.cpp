#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
int visit[1005];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    visit[src] = true;

    while(!q.empty())
    {
        int par = q.front();
        q.pop();

        for(int child : adj_list[par])
            if(!visit[child])
            {
                q.push(child);
                visit[child]  = true;
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

    int src,dis;
    cin>>src>>dis;
    memset(visit,false,sizeof(visit));
    bfs(src);

    if(visit[dis] == false)
    {
        cout<<"Not Visited";
    }else
    cout<<"Visited";
    

    
    return 0;
}