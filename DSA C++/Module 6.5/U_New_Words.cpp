#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    int e=0,g=0,y=0,p=0,t=0;

    for(char c:s)
    {
        char up_low=tolower(c);

        if(up_low == 'e') 
        {
            e++;
        }
        else if(up_low == 'g'){
             g++;
        }
        else if(up_low == 'y'){
            y++;
        } 
        else if(up_low == 'p'){
             p++;
        }
        else if(up_low == 't'){
             t++;
        }
    }



    int result=min({e,g,y,p,t});

    cout<<result;

    return 0;
}