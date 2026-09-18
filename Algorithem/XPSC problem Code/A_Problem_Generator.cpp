#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,set;
        cin>>n>>set;
        string s;
        cin>>s;
        int arr[7] = {0};
        for(auto c : s)
        {
            arr[c-'A']++;

        }
        int cnt = 0 ;
        for(int i = 0 ; i<7 ; i++)
        {
            if(arr[i] < set)
            {
                cnt +=set - arr[i];
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}