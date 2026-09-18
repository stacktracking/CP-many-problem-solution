#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    multiset<int>ml;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ml.insert(x);
    }
    int ans=0,prb=1;
    while(!ml.empty())
    {
        auto LB = ml.lower_bound(prb);
        if(LB !=ml.end())
        {
            ans++;
            ml.erase(LB);
        }else{
            break;
        }
        prb++;

    }
    cout<<ans<<endl;
    return 0;
}