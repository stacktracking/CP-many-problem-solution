#include<bits/stdc++.h>
using namespace std;
int par[100005];
int grp_size[100005];
int cmp,mx;
int find(int node)
{
    if(par[node] == -1)
    return node;

    int leader = find(par[node]);
    par[node] = leader;

    return leader;
}
void dsu_union(int leader1 ,int leader2)
{
    int leader_A = find(leader1);
    int leader_B = find(leader2);
    if(leader_A == leader_B)
    return;
    if(grp_size[leader_A] >= grp_size[leader_B])
    {
        par[leader_B] = leader_A;
        grp_size[leader_A] += grp_size[leader_B];
        mx = max(mx,grp_size[leader_A]);
    }else{
        par[leader_A] = leader_B;
        grp_size[leader_B] += grp_size[leader_A];
        mx = max(mx,grp_size[leader_B] );
    }
    cmp--;
}

int main()
{
    int n,m;
    cin>>n>>m;

     cmp = n ; 
    mx = 1;
    for(int i = 1 ; i<=n ; i++)
    {
        par[i] = -1;
        grp_size[i] = 1;
    }
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        dsu_union(a,b);
        cout<<cmp<<" "<<mx<<endl;
    }
    return 0;
}