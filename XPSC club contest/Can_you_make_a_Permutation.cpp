#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;
    while (t--) {
       long long int n, k;
    cin >> n >> k;
    long long int a[n];
    long long int chk[n + 1]; 
    memset(chk,0,sizeof(chk));

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] >= 1 && a[i] <= n) 
        {
            chk[a[i]] = 1;  
        }
    }

    long long int count = 0;
    for (int i = 1; i <= n; i++) {
        if (chk[i]) count++;
    }

    int mis = n - count;

    if (mis<= k) 
    cout << "YES"<<endl;
    else cout << "NO"<<endl;
    }
    return 0;
}
