#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        cin >> m;
        while(m--) {
            string s;
            cin >> s;
            if(s.size() != n) {
                cout << "NO"<<endl;
                continue;
            }

            map<int,char>n_to_ch;
            map<char,int>ch_to_n;
            bool flag = true;
            for(int j = 0; j < n; j++) {
                int num = v[j];
                char ch= s[j];
                if(n_to_ch.count(num))
                {
                    if(n_to_ch[num] != ch)
                    {
                        flag=false;
                        break;
                    }
                }else{
                        n_to_ch[num]=ch;
                    }
                if(ch_to_n.count(ch))
                {
                    if(ch_to_n[ch] != num)
                    {
                        flag=false;
                        break;
                    }
                }else{
                        ch_to_n[ch]=num;
                    }
            }
            if(flag) cout << "YES"<<endl;
            else cout << "NO"<<endl;
        }
    }
    return 0;
}
