#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<string> v(t);
    for(int i = 0; i < t; i++)
        cin >> v[i];

    reverse(v.begin(), v.end()); 

    unordered_set<string>st;
    vector<string> result;

    for(auto &s : v) {
        if(st.find(s) == st.end()) {
            result.push_back(s);
            st.insert(s);
        }
    }

    for(auto &s : result)
        cout << s <<endl;

    return 0;
}
