#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
char grid[N][N];
bool vis[N][N];

vector<pair<int,int>>v = {{0,1},{0,-1},{-1,0},{1,0}};
 int n,m;

bool valid(int i ,int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
    {
        return false;
    }
    return true;
}
int dfs(int si,int sj)
{
    vis[si][sj] = true;
    int sz = 1;
    for(int i = 0 ; i<4 ; i++)
    {
        int ci,cj;
        ci = si + v[i].first;
        cj = sj + v[i].second;

        if(valid(ci,cj)== true && !vis[ci][cj] && grid[ci][cj]=='.')
        {
            sz +=dfs(ci,cj);
        }
    }
    return sz;
}
int main()
{
   
    cin>>n>>m;
    
    for(int i = 0 ; i < n ; i++)
    {
        for(int j =0; j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
     int mn = INT_MAX;
    bool flag = false;
    for(int i = 0 ; i <n ; i++)
    {
        for(int j = 0 ; j<m ; j++)
        {
            if(grid[i][j]=='.' && !vis[i][j])
            {
                
                int ans = dfs(i,j);
                mn = min(mn,ans);
                flag = true;
            }
           
        }
        
    }
    if(flag== false)
    cout<<"-1";
    else
    cout<<mn;
    return 0;
}