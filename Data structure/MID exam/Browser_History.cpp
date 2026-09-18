#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<string>l;

    string s;
    while(cin>>s)
    {
        if(s == "end")
        {
           break;
        }
         l.push_back(s);

    }
    int q;
    cin>>q;
    auto curr = l.begin();
    while(q--)
    {
        string cmd;
        cin>>cmd;
        

        if(cmd == "visit")
        {
            string platName;
            cin>>platName;
            auto it = find(l.begin(),l.end(),platName);

            if(it != l.end())
            {
                cout<<*it<<endl;
                curr = it;
            }else{
                cout<<"Not Available"<<endl;
            }

        }else if(cmd == "prev")
        {
            if(curr != l.begin())
            {
                curr--;
                cout<<*curr<<endl;
            }else{
                cout<<"Not Available"<<endl;
            }
        }else if(cmd == "next")
        {
            
            if(next(curr) != l.end())
            {
                curr = next(curr);
                cout<<*curr<<endl;
            }else{
                cout<<"Not Available"<<endl;
            }



        }
    }

    return 0;
}