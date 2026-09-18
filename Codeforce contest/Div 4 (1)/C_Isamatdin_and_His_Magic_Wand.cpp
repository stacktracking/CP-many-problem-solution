// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         vector<int>v;
//         multiset<int>st,st1;
//         for(int i=1;i<=n;i++)
//         {
//             int a;
//             cin>>a;
//             v.push_back(a);
//             if(a%2==0)
//             st.insert(a);
//             else
//             st1.insert(a);
//         }
        
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
cin >> t;

while(t--){
     int n;
     cin >> n;
     vector<long int> v;
     for(int i=0; i<n; i++){
        long int x;
        cin >> x;
        v.push_back(x);
    }
    int l=0,r=0;
    for(int i=0; i<n; i++){
      if(l==1 && r == 1)break;
      if(v[i]%2==1)l=1;
      else r=1;
    }
    if(l==1 && r == 1){
        sort(v.begin(), v.end());
    }
    for(auto u:v)cout << u << " ";
    cout << endl;
}
    return 0;
}



