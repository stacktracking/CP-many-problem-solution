#include<bits/stdc++.h>
using namespace std;
int n;
char grid[10005][10005];
int vis[1005][1005];
int level [1005][1005];
vector<pair<int,int>>v = {{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i , int j)
{
    if(i<0 || i>=n || j<0 || j>=n)
    return false ;
    return true;
}

void bfs(int si ,int sj)
{
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();

        for(int i = 0 ; i < 4 ; i++)
        {
            int ci,cj;

            ci = par.first + v[i].first;
            cj = par.second + v[i].second;

            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] !='T')
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
    int si ,sj ,di,dj;
    cin>>n;
    for(int i =0 ;i<n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>grid[i][j];

            if(grid[i][j] == 'S')
            {
                si = i ;
                sj = j ; 

            }
            if(grid[i][j] == 'E')
            {
                di = i ;
                dj = j ;
            }
        }
        
    }
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    bfs(si,sj);

    cout<<level[di][dj]<<endl;
    return 0;
}