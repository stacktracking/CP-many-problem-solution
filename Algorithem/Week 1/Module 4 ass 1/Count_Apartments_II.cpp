#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
char grid[N][N];
bool vis[N][N];
vector<pair<int,int>>v = {{0,1},{0,-1},{1,0},{-1,0}};
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
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj] = true;
    int cnt = 1;
    while(!q.empty())
    {
        pair<int,int> par= q.front();
        q.pop();

        for(int i = 0 ; i<4 ; i++)
    {
        int ci,cj;
        ci = par.first + v[i].first;
        cj = par.second + v[i].second;

        if(valid(ci,cj)== true && !vis[ci][cj] && grid[ci][cj]!='#')
        {
            q.push({ci,cj});
            vis[ci][cj] = true;
            cnt++;
            
        }

    }
    }
    return cnt;
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
    if(ans.empty()) {
        cout << 0 << endl; 
    } else {
        sort(ans.begin(), ans.end());
        for(int x : ans)
         cout << x << " ";
        
    }
    return 0;
}