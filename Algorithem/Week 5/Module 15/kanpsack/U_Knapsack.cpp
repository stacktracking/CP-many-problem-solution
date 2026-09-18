#include<bits/stdc++.h>
using namespace std;
int val[105],wight[105];
int dp[105][105];
int knapsack(int i , int mx_wight)
{
    if(i<0 || mx_wight<=0)
    return 0;

    if(dp[i][mx_wight] != -1)
    return dp[i][mx_wight];

    if(wight[i] <= mx_wight)
    {
        int op1 = knapsack(i-1,mx_wight - wight[i])+ val[i];
        int op2 = knapsack(i-1,mx_wight);

        dp[i][mx_wight] = max(op1,op2);
        return dp[i][mx_wight];

    }else{
        dp[i][mx_wight] = knapsack(i-1,mx_wight);
        return dp[i][mx_wight];
        }
}
int main()
{
    int n,mx_wight;
    cin>>n>>mx_wight;

    for(int i = 0 ; i <n ;i++)
    {
        cin>>wight[i];
        cin>>val[i];
    }

    for(int i=0;i<n;i++)
        for(int j = 0 ;j<=mx_wight;j++)
            dp[i][j] =-1;

    cout<<knapsack(n-1,mx_wight)<<endl;
    return 0;
}