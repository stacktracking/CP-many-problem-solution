#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> prices(n);
    int max_sum = 0; // total sum manually
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
        max_sum += prices[i];
    }

    int q;
    cin >> q;
    vector<pair<int,int>> queries(q);
    for(int i = 0; i < q; i++) cin >> queries[i].first >> queries[i].second;

    // Step 1: subset sum DP
    vector<bool> dp(max_sum + 1, false);
    dp[0] = true; // empty subset

    for(int price : prices) {
        for(int s = max_sum; s >= price; s--) {
            dp[s] = dp[s] || dp[s - price];
        }
    }

    // Step 2: prefix sum array for fast query
    vector<int> prefix(max_sum + 2, 0);
    for(int i = 0; i <= max_sum; i++)
        prefix[i + 1] = prefix[i] + dp[i];

    // Step 3: answer each query
    for(auto [L,R] : queries) {
        R = min(R, max_sum);
        L = max(L, 0);
        cout << prefix[R + 1] - prefix[L] << "\n";
    }

    return 0;
}
