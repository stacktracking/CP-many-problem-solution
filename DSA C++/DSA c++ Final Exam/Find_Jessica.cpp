#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    
    getline(cin,s);
    int temp=0;

    stringstream ss(s);
    string word;

    while(ss>>word)
    {
        if(word=="Jessica")
        {
            temp=1;
            break;
        }
    }

     if(temp ==1)
    {
        cout<<"YES";

    }else{
        cout<<"NO";
    }
    return 0;
}