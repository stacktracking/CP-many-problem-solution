#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;

        vector<int> teachers(m);
        for (int i = 0; i < m; ++i) cin >> teachers[i];
        sort(teachers.begin(), teachers.end());

        while (q--) {
            int david;
            cin >> david;

            if (david < teachers.front()) {
                cout << teachers.front() - 1 << '\n';
            }
            else if (david > teachers.back()) {
                cout << n - teachers.back() << '\n';
            }
            else {
                int x = lower_bound(teachers.begin(), teachers.end(), david)-teachers.begin();
                
                cout<<(teachers[x]-teachers[x-1])/2<<endl;
            }
        }
    }
    return 0;
}
