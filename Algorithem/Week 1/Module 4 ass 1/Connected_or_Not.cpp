#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int adj_mat[n][n];
    memset(adj_mat,0,sizeof(adj_mat));
    for(int i = 0; i<n;i++)
    {
        for(int j= 0;j<n;j++)
        {
            if(i==j)
            adj_mat[i][j] = 1;
        }
    }
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        adj_mat[a][b] = 1;
    }
    int q;
    cin>>q;
    while (q--)
    {
        int si,sj;
        cin>>si>>sj;

        if(adj_mat[si][sj] == 1)
        {
            cout<<"YES"<<endl;
        }else
        cout<<"NO"<<endl;
    }
    
    return 0;
}