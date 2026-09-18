#include <bits/stdc++.h>
using namespace std;

int arr[1005];
int dp[1005][1005];

int subset(int n, int sum) {
    if(n<0) 
    { 
        if(sum==0) 
        return 1; 
        else 
        return 0; 
    }

    if(dp[n][sum] != -1)
     return dp[n][sum];

    if(arr[n] <= sum) {
        int op1 = subset(n-1, sum - arr[n]);
        int op2 = subset(n-1, sum);
        return dp[n][sum] = op1 + op2;
    } else {
        return dp[n][sum] = subset(n-1, sum);
    }
}

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];

    int sum;
    cin >> sum;

    for(int i=0; i<n; i++)
        for(int j=0; j<=sum; j++)
            dp[i][j] = -1;

    cout<<subset(n-1, sum);

    return 0;
}
