#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            mp[a]++;
        }
        priority_queue<int>q;
        for(auto it : mp)
        {
            q.push(it.second);
        }
        
        while(!q.empty())
        {
            if(q.size()<2)
            {
                break;
            }
            int x,y;
            x=q.top();
            q.pop();
            y=q.top();
            q.pop();
            x--;
            y--;
            if(x>0)
            q.push(x);
            if(y>0)
            q.push(y);

        }
        int ans = 0;
        while (!q.empty()) {
            ans += q.top();
            q.pop();
        }

        cout << ans <<endl;
        
    }

    return 0;
}