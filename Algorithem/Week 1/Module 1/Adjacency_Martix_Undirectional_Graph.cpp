#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e;
    cin>>n>>e;

    int adj_mat [n][n];

    memset(adj_mat,0,sizeof(adj_mat));//full matrix ta te 0 set korar jono aita likheci (memset akta building function)
    for(int i = 0; i<n ; i++) // ayta diya hoiyece karon amra jani 1 theke 1 a jaowa jai 2 theke 2 a jowa jai , tai idx 1 and idx 1 a 1 boshiye diyeci

        for(int j = 0; j<n; j++)
            if(i==j)
                adj_mat[i][j] =1;
    for(int i = 0; i<e; i++)
    {
        int a,b;
        cin>>a>>b;

        adj_mat[a][b] = 1;
        adj_mat[b][a] = 1;
    }
    for(int i = 0; i<e; i++)
    {
        for(int j = 0; j<e ; j++)
        {
            cout<<adj_mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}