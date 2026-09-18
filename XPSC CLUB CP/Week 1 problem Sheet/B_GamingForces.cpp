// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i =0 ; i<n ;i++)
//         cin>>arr[i];
//         int cnt1 = 0 , cnt2 = 0;
//         for(int  i = 0 ;i<n ;i++)
//         {
//             if(arr[i] == 1)
//             {
//                 cnt1++;
//             }else{
//                 cnt2++;
//             }
//         }
//         if(cnt1%2 ==0 )
//         {
//             cout<<(cnt1/2)+cnt2<<endl;
            
//         }else{
//             cout<<((cnt1/2)+1)+cnt2<<endl;
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
 int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        long long int cnt = 0;
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
            cnt = cnt + arr[i];
        }
        if (cnt >= n * 2)
        {
            cout << n << endl;
        }
        else
        {
           long long int x = cnt / 2;
          
            if (cnt % 2 == 1) // count bijor
            {
            x = x + 1;
            }
          
          cout << x << endl;
        }
    }

    return 0;
}