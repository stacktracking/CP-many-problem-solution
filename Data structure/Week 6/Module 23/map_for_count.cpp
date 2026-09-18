#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>mp;   // map<key,val>map-name //(count korar somoy amra array use kori na karon ,array sudo int count korte pare )
    // but map shob kicu count korte pare , jodi o array theke map ar compexcity beshi. jokhon arrary diye kaj kora jabe na tokon amra map use korbo
    mp["Mehedi"] = 5;
    mp["hasan"] = 10 ;   // insert : long n (for one insert);
    mp["Nirob"] = 20;
    mp["hamin"] = 0;

    for(auto it = mp.begin(); it!= mp.end(); it++) // (nlongn) n number of output;
    {
        //itaretor use korteci karon map a index nai tai 
        cout<<it->first<<" "<<it->second<<endl; // output : longn(for one value show )
        // ay khan valo pair kore thake tai ay bave likha hoice ;

    }
    if(mp.count("hamin"))
    { // map ay value ta ache naki aita count diye ckeck kora jai ;
        cout<<"ache";
    }else
    cout<<"nai";
    return 0;
}