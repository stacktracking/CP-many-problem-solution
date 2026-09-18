#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    map<long long, pair<int,int>> mp;
    
    
    for(int i = 0; i < n; i++){
        long long val = arr[i];
        int idx = i + 1; 
        if(mp[val].first == 0) {
            mp[val].first = idx;
            mp[val].second = idx;
        } else {
            mp[val].second = idx;
        }
    }
    for(auto p : mp){
    cout << p.first << " " << p.second.first << " " << p.second.second <<endl;
}

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     vector<long long> arr(n);
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];
//     vector<pair<long long, pair<int,int>>> vec;

//     for(int i = 0; i < n; i++){
//         long long val = arr[i];
//         int idx = i + 1;

//         bool found = false;
//         for(auto &p : vec){
//             if(p.first == val){
//                 p.second.second = idx;
//                 found = true;
//                 break;
//             }
//         }
//         if(!found){
           
//             vec.push_back({val, {idx, idx}});
//         }
//     }

   
//     sort(vec.begin(), vec.end());

//     for(auto &p : vec){
//         cout << p.first << " " << p.second.first << " " << p.second.second <<endl;
//     }

//     return 0;
// }
