#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

    
        int freq[26] = {0};
        for (char c : s) {
            freq[c - 'a']++;
        }

        int maxFreq = 0;
        for (int i = 0; i < 26; i++) {
            maxFreq = max(maxFreq, freq[i]);
        }

        cout << maxFreq << "\n";
    }

    return 0;
}
