#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        vector<int> v(m);
        for (int i = 0; i < m; i++) 
        cin >> v[i];

        string c;
        cin >> c;

        sort(v.begin(), v.end());

        v.erase(unique(v.begin(), v.end()), v.end());

        sort(c.begin(), c.end());

        int len = v.size();
        for (int i = 0; i < len; i++) {
            s[v[i] - 1] = c[i]; 
        }

        cout << s << '\n';
    }
    return 0;
}
