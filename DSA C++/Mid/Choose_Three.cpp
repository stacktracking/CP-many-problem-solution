#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        int n,s;
        cin>>n>>s;
        int arr[n];
        int check =0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(int i=0;i<n-2;i++)
        {
            for(int j=1;j<n-1;j++)
            {
                if(arr[i]+arr[j]+arr[j+1]==s)
                {
                     check=1;
                     break;
                }
            }
        }

        if(check==1)
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    }
    
    return 0;
}