#include<bits/stdc++.h>
using namespace std;
int dp[100005];
bool find(int cur , int n)
{
    if(cur == n)
    return true;
    if(cur > n)
    return false;

    if(dp[cur] != -1)
    return dp[cur];

    dp[cur] =find(cur+3,n) || find(cur*2,n);
    return dp[cur];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i = 0 ; i < n ; i++)
        dp[i] = -1;
        
        if(find(1,n))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}