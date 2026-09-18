#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int zeroCount = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) zeroCount++;
        }

        if (zeroCount == 0) {
            cout << "Alice"<<endl;
        }
        else if (zeroCount % 2 == 1) {
            cout << "Alice"<<endl;
        }
        else {
            
            if (a[0] == 1 && a[n-1] == 1)
                cout << "Alice"<<endl;
            else
                cout << "Bob"<<endl;
        }
    }
    return 0;
}
