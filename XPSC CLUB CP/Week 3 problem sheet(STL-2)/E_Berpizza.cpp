#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int idx = 1;

    set<pair<int,int>> st;             
    multiset<pair<int,int>> ml;        
    vector<int> v;
    int cst=1;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            int val;
            cin>>val;
            st.insert({cst,val});
            ml.insert({val,-cst});
            cst++;
        }else if(n==2)
        {
            int idx = st.begin()->first,money=st.begin()->second;
            v.push_back(idx);
            st.erase(st.begin());
            ml.erase({money,-idx});
        }else{
            int money = ml.rbegin()->first,idx=-ml.rbegin()->second;
            v.push_back(idx);
            ml.erase(--ml.end());
            st.erase({idx,money});
        }
    }
    for(int it : v)
    cout<<it<<" ";
    cout<<endl;
}
