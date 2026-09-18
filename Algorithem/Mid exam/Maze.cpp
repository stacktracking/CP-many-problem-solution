#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
char grid[N][N];
bool vis[N][N];
int level[N][N];
pair<int,int>parent[N][N];
vector<pair<int,int>>v = {{0,1},{0,-1},{-1,0},{1,0}};
int n,m;

bool valid(int i , int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;

}
void bfs(int si,int sj)
{
    queue<pair<int,int>>q;
    q.push({si,sj});
     vis[si][sj] = true;
    level[si][sj] = 0;

    while(!q.empty())
    {
        pair<int,int>par = q.front();
        q.pop();
       
        for(int i = 0 ; i<4 ; i++)
        {
            int ci,cj;
            ci = par.first + v[i].first;
            cj = par.second + v[i].second;

            if(valid(ci,cj)==true && !vis[ci][cj] && grid[ci][cj] != '#')
            {
                q.push({ci,cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par.first][par.second] + 1;
                parent[ci][cj] = par;
            
            }
        }
    }
}
int main()
{
    
    cin>>n>>m;
    int si,sj,di,dj;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }else if(grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    if(!vis[si][sj] && grid[si][sj] !='#' )
    bfs(si,sj);

    if(level[di][dj] != -1)
     { 
    pair<int,int> node = {di,dj};
    vector<pair<int,int>> path;

    while(!(node.first == si && node.second == sj)) {

        path.push_back(node);
        node = parent[node.first][node.second];
    }
    reverse(path.begin(), path.end());
    for(auto x : path) {
        if(grid[x.first][x.second] == '.')
            grid[x.first][x.second] = 'X';
    }
}

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<grid[i][j];
            
        }
        cout<<endl;
    }

    return 0;

}