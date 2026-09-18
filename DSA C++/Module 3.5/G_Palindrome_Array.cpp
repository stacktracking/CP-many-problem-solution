#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int check=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i < n / 2; i++) {
    if(arr[i] != arr[n - i - 1]) {
        check = 1;
        break;
    }
}


    if(check==1)
    {
        cout<<"NO";
    }else{
        cout<<"YES";
    }


    return 0;
}