#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        multiset<int>ml;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            ml.insert(a);
        }
    
        int ans=0;
        while(!ml.empty())
        {
            int mn =*ml.begin();
            ml.erase(ml.begin());
            while(true)
            {
                auto it = ml.find(mn+1);
                if(it != ml.end())
                {
                    ml.erase(it);
                    mn=mn+1;
                }else{
                    ans++;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}