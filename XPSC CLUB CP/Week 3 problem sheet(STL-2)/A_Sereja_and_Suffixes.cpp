#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> dis(n);
    set<int> st;

    
    for (int i = n - 1; i >= 0; i--) {
        st.insert(v[i]);
        dis[i] = st.size();
    }

    while (m--) {
        int x;
        cin >> x;
        cout << dis[x - 1] <<endl;
    }

    return 0;
}
