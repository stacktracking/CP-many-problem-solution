#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;

    
    
    while(getline(cin,s))
    {
        string word;

        for(int i = 0;s[i] !='\0'; i++)
        {
            if(s[i] !=' ')
            {
                word +=s[i];
            }
        }

        int n=word.length();
       for (int i = 0; i < n - 1; i++) 
       {
            for (int j = 0; j < n - i - 1; j++) 
            {
                if (word[j] > word[j + 1]) 
                {
                    swap(word[j], word[j + 1]);
                }
            }
        }

        cout<<word<<endl;

    }
    return 0;
}