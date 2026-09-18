#include<bits/stdc++.h>
using namespace std;
int val[105],wight[105];

int knapsack(int i ,int mx_wight)
{
    if(i<0 || mx_wight <= 0)
    return 0;

    if(wight[i] <= mx_wight)
    {
        int op1 = knapsack(i-1,mx_wight - wight[i])+ val[i];
        int op2 = knapsack(i-1,mx_wight);

        return max(op1,op2);
    }else
    {
            return knapsack(i-1,mx_wight);
        
    }
    
}
int main()
{
    int n;
    cin>>n;
    int max_wight;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>val[i];
    }
    for(int j = 0 ; j<n ; j++)
    {
        cin>>wight[j];
    }
    
    cin>>max_wight;
    
    cout<<knapsack(n-1,max_wight);
    return 0;
}