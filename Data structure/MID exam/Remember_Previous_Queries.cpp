#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>l;
    int t,idx,val;
    cin>>t;
    while(t--)
    {
        cin>>idx>>val;

        if(idx == 0)
        {
           l.push_front(val);

            cout<<"L -> ";
            for(int element : l)
            {
                    cout<<element<<" ";
            }
            cout<<endl;
            
            cout<<"R -> ";
            for(auto it= l.rbegin(); it!=l.rend();++it)
            {
                 cout<<*it<<" ";
            }
            cout<<endl;
            
        }else if (idx == 1){

            l.push_back(val);

            cout<<"L -> ";
            for(int element : l)
            {
                    cout<<element<<" ";
            }
            cout<<endl;
            
            cout<<"R -> ";
            for(auto it= l.rbegin(); it!=l.rend();++it)
            {
                 cout<<*it<<" ";
            }
            cout<<endl;
        }else if(idx == 2)
        {

            if(val< l.size())
             l.erase(next(l.begin(),val));

           cout<<"L -> ";
            for(int element : l)
            {
                    cout<<element<<" ";
            }
            cout<<endl;
            
            cout<<"R -> ";
            for(auto it= l.rbegin(); it!=l.rend();++it)
            {
                 cout<<*it<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}