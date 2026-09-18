#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> freq(n + 2, 0);
        set<int> missing;

        for (int i = 0; i <= n + 1; i++)
            missing.insert(i);

        
        for (int i = 0; i < k; i++) {
            freq[a[i]]++;
            if (freq[a[i]] == 1)
                missing.erase(a[i]);
        }

        int maxMex = *missing.begin();

    
        for (int i = k; i < n; i++) {
            int out = a[i - k];
            freq[out]--;
            if (freq[out] == 0)
                missing.insert(out);

            int in = a[i];
            freq[in]++;
            if (freq[in] == 1)
                missing.erase(in);

            maxMex = max(maxMex, *missing.begin());
        }

    
        cout << min(maxMex, k - 1) <<endl;
    }
    return 0;
}
