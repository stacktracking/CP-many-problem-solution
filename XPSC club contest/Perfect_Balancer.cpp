#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long int arr[n];
    for(int i=0; i<n; i++) 
    cin >> arr[i];

    long long total = 0;
    for(int i=0; i<n; i++) 
    total += arr[i];  

    long long left_sum = 0;

    for(int i=0; i<n; i++)
     {
        long long right_sum = total - left_sum; 

        if(left_sum + arr[i] == right_sum)
         {
            cout << right_sum << " " << (i+1) <<endl;  
            return 0;
        }
        left_sum += arr[i];
    }

    cout << "UNSTABLE"<<endl;
    return 0;
}
