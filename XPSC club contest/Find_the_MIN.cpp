#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int  main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll q;
    cin >> q;

    priority_queue<ll , vector<ll >, greater<ll >> pq;
    unordered_map<ll , ll> freq;

    while (q--) {
        ll a;
        cin >> a;

        if (a == 1) {
            ll  X;
            cin >> X;
            pq.push(X);
            freq[X]++;
        } else { 
           
            while (!pq.empty() && freq[pq.top()] == 0) {
                pq.pop(); 
            }

            if (pq.empty()) {
                cout << "empty"<<endl;
            } else {
                ll  val = pq.top();
                cout << val <<endl;
                freq[val] = 0; 
            }
        }
    }

    return 0;
}
