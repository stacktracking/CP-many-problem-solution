#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;

    int m=max({x,y,z});
    int n=min({x,y,z});

    cout<<n<<" "<<m;
}
