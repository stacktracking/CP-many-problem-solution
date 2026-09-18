#include<bits/stdc++.h>
using namespace std;
bool vis[105][105];
int level[105][105];
vector<pair<int,int>>v ={{-2, -1},{-2,  1},{-1, -2},{-1,  2},{ 1, -2},{ 1,  2},{ 2, -1},{ 2,  1} 
};
bool valid(int i , int j,int n,int m)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}

void bfs(int si,int sj,int n,int m)
{
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj] = true;
    level[si][sj] = 0;

    while(!q.empty())
    {
        pair<int,int>par = q.front();
        q.pop();
       
        for(int i = 0 ; i<8 ; i++)
        {
            int ci,cj;
            ci = par.first + v[i].first;
            cj = par.second + v[i].second;

            if(valid(ci,cj,n,m)==true && !vis[ci][cj])
            {
                q.push({ci,cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par.first][par.second] + 1;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        
        int n,m;
        cin>>n>>m;
        int grid[n][m];
        memset(vis,false,sizeof(vis));
        memset(level,-1,sizeof(level));
        int si,sj,di,dj;
        cin>>si>>sj>>di>>dj;
        bfs(si,sj,n,m);
        cout<<level[di][dj]<<endl;
    }
        
    return 0;
}