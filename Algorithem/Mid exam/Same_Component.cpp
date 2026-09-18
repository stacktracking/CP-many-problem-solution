#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
char grid[N][N];
bool vis[N][N];
int level[N][N];
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
       
        for(int i = 0 ; i<8 ; i++)
        {
            int ci,cj;
            ci = par.first + v[i].first;
            cj = par.second + v[i].second;

            if(valid(ci,cj)==true && !vis[ci][cj] && grid[ci][cj] == '.')
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
    
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    int si,sj,di,dj;
    cin>>si>>sj>>di>>dj;
    if(!vis[si][sj] && grid[si][sj] =='.')
    bfs(si,sj);

    if(level[di][dj] == -1)
    cout<<"NO";
    else
    cout<<"YES";
    return 0;
}