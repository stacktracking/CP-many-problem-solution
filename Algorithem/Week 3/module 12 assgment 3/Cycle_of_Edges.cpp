#include<bits/stdc++.h>
using namespace std;
int par[100005];
int grp_size[100005];

int find(int node)
{
    if(par[node] == -1)
    {
        return node;
    }
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}
void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if(grp_size[leader1] >= grp_size[leader1])
    {
        par[leader2] = leader1;
        grp_size[leader1] = grp_size[leader2];
    }else{
        par[leader1] = leader2;
        grp_size[leader2] = grp_size[leader1];
    }
}
int main()
{
    memset(par,-1,sizeof(par));
    memset(grp_size,1,sizeof(grp_size));

    int n,m;
    cin>>n>>m;
    int cnt =0;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        int leaderA = find(a);
        int leaderB = find(b);

        if(leaderA == leaderB)
        cnt++;
        else
        dsu_union(a,b);
    }
    cout<<cnt<<endl;
    return 0;
}