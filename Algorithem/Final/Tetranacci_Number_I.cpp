#include<bits/stdc++.h>
using namespace std;
int dp[105];
int tibo(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    if(n==2)
    return 1;
    if(n==3)
    return 2;

    if(dp[n] != -1)
    return dp[n];

    dp[n] = tibo(n-1) + tibo(n-2) + tibo(n-3) + tibo(n-4);

    return dp[n];

}
int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<tibo(n);
    return 0;
}