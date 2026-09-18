#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        priority_queue<pair<int,int>>pq;

        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];

            pq.push({arr[i],i});
        }
        int first = pq.top().second;
        pq.pop();
        int second = pq.top().second;

        if(first<second)
        cout<<first<<" "<<second<<endl;
        else
        cout<<second<<" "<<first<<endl;
    }
    return 0;
}