#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int>mp;
    string ans,s;
    int id=0,n;
    cin>>n>>s;
    
	for(int i=1;i<s.size();++i)
    mp[s.substr(i-1,2)]++;
	for(auto&x:mp)
    {
        if(x.second>id)
        ans=x.first,id=x.second;
    }
	cout<<ans<<endl;
}