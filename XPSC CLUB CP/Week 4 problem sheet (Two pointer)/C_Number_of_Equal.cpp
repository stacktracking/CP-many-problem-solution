#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<long long> a(n), b(m);

    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<m; i++) cin >> b[i];

    long long i = 0, j = 0;
    long long ans = 0;

    while (i < n && j < m) {
        if (a[i] == b[j]) {
            long long val = a[i];

            long long cntA = 0;
            while (i < n && a[i] == val) {
                cntA++;
                i++;
            }

            long long cntB = 0;
            while (j < m && b[j] == val) {
                cntB++;
                j++;
            }

            ans += cntA * cntB;
        }
        else if (a[i] < b[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    cout << ans <<endl;
    return 0;
}
