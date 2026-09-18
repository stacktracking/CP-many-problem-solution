#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int adj_mat[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                adj_mat[i][j]=0;
            else
            adj_mat[i][j] = INT_MAX;
        }
    }

    while(m--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adj_mat[a][b] =c;
    }
    for(int i = 0 ; i<n;i++) //O(V);
    {
        for(int j=0;j<n;j++)   //O(V);
        {
            for(int k=0;k<n;k++)  //O(V);
            {
                if(adj_mat[j][i]!=INT_MAX && adj_mat[i][k]!=INT_MAX && adj_mat[j][i]+adj_mat[i][k] < adj_mat[j][k])
                    adj_mat[j][k]= adj_mat[j][i]+adj_mat[i][k] ; 
            }
            
        } //TOTAL O(V*V*V);
    }

    bool cycle = false;
    for(int i = 0 ;i < n ;i++)
    {
        if(adj_mat[i][i] < 0)
        {
            cycle = true;
        }
    }
    if(cycle)
    {
        cout<<"Detect cycle"<<endl;
    }else{
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(adj_mat[i][j] == INT_MAX)
                cout<<"INF"<<" ";
            else
            cout<<adj_mat[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    
    return 0;
}