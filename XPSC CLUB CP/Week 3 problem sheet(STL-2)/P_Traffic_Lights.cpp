#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,n;
    cin>>x>>n;
    set<int>light;
    multiset<int>dis;

    light.insert(0);
    light.insert(x);
    dis.insert(x);
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        auto it = light.upper_bound(p);
        int right = *it;
        it--;
        int left = *it;
        dis.erase(dis.find(right-left));
        dis.insert(right-p);
        dis.insert(p-left);
        light.insert(p);
        cout<<*dis.rbegin()<<" ";
    }
    cout<<endl;
    return 0;
}