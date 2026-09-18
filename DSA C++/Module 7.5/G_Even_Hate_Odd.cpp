#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        long long  n;
        cin>>n;
        int arr[n];
        int even=0,odd=0;
        long long result;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        if(n%2==0)
        {
            for(int i=0;i<n;i++)
            {
                if(arr[i]%2==0)
                {
                    even++;
                }else{
                    odd++;
                }
            }

            

            if(even==odd)
            {
                cout<<"0"<<endl;
            }else if(even>odd)
            {
                result=n/2;
                cout<<even-result<<endl;
            }else{

                result=n/2;
                cout<<odd-result<<endl;
            }
             
        }else{
            cout<<"-1"<<endl;
        }

       
    }
    return 0;
}