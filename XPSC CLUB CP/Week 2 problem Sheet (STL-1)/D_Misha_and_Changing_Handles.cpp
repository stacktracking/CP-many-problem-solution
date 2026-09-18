#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, string> mp1, mp2,mp3;

   
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        
        if(mp2.find(a) != mp2.end())
        {
            string s = mp2[a];
            mp1[s]=b;
            mp2.erase(a);
            mp2[b]=s;

        }else{
            mp1[a]=b;
            mp2[b]=a;
        }
    }
    cout<<mp1.size()<<endl;
    for(auto it : mp1)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    
   
    return 0;
}
