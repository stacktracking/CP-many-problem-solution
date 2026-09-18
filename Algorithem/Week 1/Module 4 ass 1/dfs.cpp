#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
char grid[N][N];
bool vis[N][N];
vector<pair<int,int>>v = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;

bool valid(int i ,int j)
{
    return !(i<0 || i>=n || j<0 || j>=m);
}

int dfs(int si,int sj)
{
    vis[si][sj] = true;
    int cnt = 1;
    for(int i = 0 ; i<4 ; i++)
    {
        int ci = si + v[i].first;
        int cj = sj + v[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]!='#')
        {
            cnt += dfs(ci,cj);
        }
    }
    return cnt;
}

int main()
{
    cin>>n>>m;
    for(int i = 0 ; i < n ; i++)
        for(int j =0; j<m;j++)
            cin>>grid[i][j];

    memset(vis,false,sizeof(vis));
    vector<int>ans;

    for(int i = 0; i < n ; i++)
    {
        for(int j = 0 ;j<m;j++)
        {
            if(grid[i][j] !='#' && !vis[i][j])
            {
                int count = dfs(i,j);
                ans.push_back(count); 
            }
        }
    }
    for(int x : ans)
        cout<<x<<" ";
    return 0;
}
