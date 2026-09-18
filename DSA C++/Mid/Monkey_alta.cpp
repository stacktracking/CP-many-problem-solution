#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    while (getline(cin, s)) {
        string word;

        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] != ' ') {
                word += s[i];
            }
        }

        int n = word.length();
        char arr[100001];

        for (int i = 0; i < n; i++) {
            arr[i] = word[i];
        }

        sort(arr, arr + n); 

        for (int i = 0; i < n; i++) {
            cout << arr[i];
        }

        cout << endl;
    }

    return 0;
}
