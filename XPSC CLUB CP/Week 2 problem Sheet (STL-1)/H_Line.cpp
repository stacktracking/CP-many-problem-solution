#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<long long> update(n);
        long long curr_sum = 0;

        for(int i = 0; i < n; i++) {
            long long val;
            if(s[i] == 'L') {
                val = i;      
            } else {
                val = n - 1 - i; 
            }

            curr_sum += val;

            if(s[i] == 'L')
                update[i] = (n-1-i) - i;
            else
                update[i] = i - (n-1-i);
        }

        sort(update.rbegin(), update.rend());

        vector<long long> ans(n);
        long long temp = curr_sum;
        for(int i = 0; i < n; i++) {
            if(update[i] > 0) temp += update[i];
            ans[i] = temp;
        }

        for(auto x : ans)
        cout << x << " ";
        cout <<endl;
    }
    return 0;
}
