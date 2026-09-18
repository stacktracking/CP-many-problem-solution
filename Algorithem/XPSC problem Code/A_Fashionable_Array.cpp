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

        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int mn = arr[0];
        int mx = arr[n-1];
        
        if(mn%2 == 0 && mx%2 == 0)
        {
            cout<<"0"<<endl;
        }
        else{
            int i =0 ;
            int cnt = 0 ;
            while(arr[i]%2 != mx%2)
            {
                i++;
                cnt++;
            }
            int j =n-1 ;
            int cnt1 = 0 ;
            while(arr[j]%2 != mn%2)
            {
                j--;
                cnt1++;
            }
            cout<<min(cnt,cnt1)<<endl;
        }

    }
    return 0;
}