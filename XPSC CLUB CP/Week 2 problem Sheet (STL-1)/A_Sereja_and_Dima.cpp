#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0 ; i<n ;i++)
    cin>>arr[i];


    int sereja =0 ,dima =0 ;
    int l = 0,r=n-1;
    bool flag = true;
    while(l<=r)
    {
        int pik;
            if(arr[l] > arr[r])
            {
                pik = arr[l];
                l++;
            }else
            {
                pik=arr[r];
                r--;
            }
            
            if(flag)
            sereja +=pik;
            else
            dima +=pik;

            flag = !flag;
        
    }
        
    
    cout<<sereja<<" "<<dima<<endl;
    return 0;
}