#include<bits/stdc++.h>
using namespace std;
vector<int>adj_mat[1005];
bool visit[1005];
void bfs(int sre)
{
    queue<int>q;
    q.push(sre);
    visit[sre] = true;

    while(!q.empty())
    {
        int par = q.front();
        q.pop();

        cout<<par<<" ";

        for(int child : adj_mat[par])
        {
            if(!visit[child])
            {
                q.push(child);
                visit[child] = true;
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
        adj_mat[a].push_back(b);
        adj_mat[b].push_back(a);
    }
    memset(visit,false,sizeof(visit));
    bfs(0);
    return 0;
}