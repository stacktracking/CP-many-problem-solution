#include <bits/stdc++.h>
using namespace std;

string palindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return rev;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string rev = palindrome(s);

        // case 1: already palindrome
        if (s == rev) {
            cout << 0 << endl;
            continue;
        }

        bool flag = false;
        for (int i = 0; i < n - 1; i++) {
            // check both '01' and '10'
            if ((s[i] == '0' && s[i + 1] == '1') || (s[i] == '1' && s[i + 1] == '0')) {

                string s1 = s.substr(0, i) + s.substr(i + 2);
                string s1_rev = palindrome(s1);

                if (s1 == s1_rev) {
                    cout << 2 << endl;
                    cout << i + 1 << " " << i + 2 << endl;
                    flag = true;
                    break;
                }
            }
        }

        if (!flag) cout << -1 << endl;
    }
    return 0;
}
