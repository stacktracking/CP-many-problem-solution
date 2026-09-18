#include<bits/stdc++.h>
using namespace std;
int par[1005];
int find(int node)
{
    if(par[node] == -1)
    return node;
    cout<<node<<endl;
    int leader = find(par[node]);
    par[node] = leader; // aita diyer karon holo amra jokhon 4 ar par ber korteci tokhon 1 astece , kintu amra jokhon 5 ar par ber korte jabo aber same road diye giye bolbe par 1;
    return leader;       // akon amra jodi backtrac korar somoy 4,5,6 ar par 1 kore dei ta hole bar bar recartion call korte hobe na time comcity kome jabe;
    // age chilo O(N);
    //akon backtrace korar somoy 1 kore diya te time complxcity holo O(logN);
}
int main()
{
    memset(par,-1,sizeof(par));
    par[1] = -1;
    par[2] = 1;
    par[3] = 1;
    par[4] = 5;
    par[5] = 6;
    par[6] = 1;

    cout<<find(4)<<endl;
    return 0;
}