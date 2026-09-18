#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s,result=" ";
        cin >> s;

        set<char> st;
        for (auto c : s)
            st.insert(c);
        string r(st.begin(),st.end());
        map<char,char>mp;
        for(int i=0;i<r.size();i++)
        {
            char left = r[i];
            char right = r[r.size()-1-i];
            mp[left]=right;
            mp[right]=left;
        }
        for(auto c : s)
        {
            result += mp[c];
        }
        cout<<result<<endl;
    }

    return 0;
}
