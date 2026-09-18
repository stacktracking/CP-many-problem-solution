#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
        int cost = 0;
        int a, sum = 0;
        if(n==2)
        {
            cout<<4<<endl;
            continue;
        }
        
         if(n==3)
         {
            cout<<5<<endl;
            continue;
         }
        
        int cost1 =INT_MAX;
            for(int i = 0 ; n-(3*i)>=0 ;i++)
        {
            sum = n-3*i;

            if(sum%2==0)
            {
                a = sum/2;
                cost = (4*a) + (5*i);
                 cost1  = min(cost1,cost);
            }
           
        
        }
        
        cout<<cost1<<endl;
       
    }
}
