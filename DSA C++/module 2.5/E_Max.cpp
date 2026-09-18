#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        int r;
        int h=0;
    
      for(int i=0;i<n;i++)
    {    
         if(i<n-i)
         {
            r =max(arr[i],arr[n-i-1]);
         }
           if(h<r)
           {
            h=r;
           }
        
        
     }
     
        cout<<h;
    return 0;
}