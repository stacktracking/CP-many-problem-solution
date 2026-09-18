#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,mex;
    cin>>n>>mex;

    vector<int> arr(n);
    
    for(int i = 0 ;i<n ;i++)
    {
        cin>>arr[i];
    }
   

    bool arr1[mex+1];
    memset(arr1,false,sizeof(arr1));
 for (int val : arr) {
        if (val <= mex) 
        arr1[val] = true;
    }
    int cnt= 0;
    for(int i = 0 ; i<mex ;i++)
    {
        if(!arr1[i])
        {
            cnt++;
        }
    }
    
    if(arr1[mex])
    {
        cnt++;
    }
    cout<<cnt<<endl;
    
    

    return 0;
}