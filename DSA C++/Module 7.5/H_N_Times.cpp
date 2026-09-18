#include<bits/stdc++.h>
using namespace std;

void print(int n,char c)
{
    string s="";
   for(int i=0;i<n;i++)
   {
     s.push_back(c);

     if(i !=n-1)
     {
        s.push_back(' ');
     }
   }
   cout<<s<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        char c;
        cin>>c;
        print(n,c);
    }


    
    return 0;
}