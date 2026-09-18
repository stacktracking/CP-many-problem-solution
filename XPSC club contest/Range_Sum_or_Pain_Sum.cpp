#include <bits/stdc++.h>
using namespace std;
#define ll long long int


ll Sum(ll k) {
    if (k <= 0) 
    return 0; 
    ll m = k / 2;         
    ll sum = m * (m + 1);
    if (k % 2 == 1)
     sum += (m + 1); 
    return sum;
}

int main() {
   ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll N; 
    int Q;
    cin >> N >> Q;

    while (Q--) {
        ll L, R;
        cin >> L >> R;
        cout <<Sum(R) - Sum(L - 1) << "\n";
    }

    return 0;
}
