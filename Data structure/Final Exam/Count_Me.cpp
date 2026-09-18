#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        string word;
        map<string,int>mp;
        int max =0;
        string name = "";
        while(ss>>word)
        {
            mp[word]++;
        
             if(mp[word] > max)
            {
                max = mp[word];
                name = word;

            }
        
        }
        
        cout<<name<<" "<<max<<endl;
    }
    return 0;
}