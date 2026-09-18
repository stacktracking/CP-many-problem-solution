#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int lift_a ,lift_b,lift_b_go;
        cin>>lift_a>>lift_b>>lift_b_go;

        int cur_pos = 1;

        int time_a = 0 ,time_b = 0 , time_c= 0 ,sum = 0;

        time_a = lift_a - cur_pos;
        if(lift_b_go >= lift_b)
        time_b = lift_b_go - lift_b;
        else
        time_b = lift_b - lift_b_go; 

        time_c = lift_b_go - cur_pos;

        sum = time_b + time_c ; 

        if(time_a < sum )
        cout<<1<<endl;
        else if(time_a == sum)
        cout<<3<<endl;
        else
        cout<<2<<endl;

    }
   
    return 0;
}