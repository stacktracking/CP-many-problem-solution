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
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    
      int result=0;
      int temp=INT_MAX;
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            result=arr[i]+arr[j]+(j-i);
            temp = min(temp, result);
            
    }

    
    
}
       cout<<temp<<endl;
    }


return 0;

}
