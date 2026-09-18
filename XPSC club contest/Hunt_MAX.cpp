#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<long long> v;

    while(t--) {
        int n;
        cin >> n;

        if(n == 1) {
            long long x;
            cin >> x;
            v.push_back(x);  
        } else if(n == 2) {
            if(v.empty()) {
                cout << "empty"<<endl;
                continue;
            }
           
            map<long long,long long> count;
            for(auto num : v) 
            count[num]++;

            long long max_cnt = 0;
            long long val = 0;
            for(auto p : count) {
                if(p.second > max_cnt || (p.second == max_cnt && p.first > val)) {
                    max_cnt = p.second;
                    val = p.first;
                }
            }

            cout << val <<endl;

            
            long long rmv = max(1LL, max_cnt - 1);
            
            vector<long long> temp;
            long long cnt = 0;
            for(auto num : v) {
                if(num == val && cnt < rmv) {
                    cnt++;
                    continue;
                }
                temp.push_back(num);
            }
            v = temp; 
        }
    }

    return 0;
}
