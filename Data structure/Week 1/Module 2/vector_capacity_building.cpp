#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    // cout<<v.size()<<endl; //ay ta diye vector ti koto size ar ta dekha jai;
    v.push_back(10); //vector a kono kicu push korte chaile aita use kora hoi;
    // cout<<v.capacity()<<endl; //aita diye max koto ta element rakha jabe vector a ta dekha jai ;

     v.push_back(20);
    // cout<<v.capacity()<<endl;
     v.push_back(40);
    // cout<<v.capacity()<<endl;
     v.push_back(30);
    // cout<<v.capacity()<<endl;

    // cout<<"vector size: "<<v.size()<<endl;

    // v.clear(); //aita diye vector ar size clear hole o element golo clear hoi na;

    // cout<<"new size : "<<v.size()<<endl;

   // v.resize(2);
    v.resize(3);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}