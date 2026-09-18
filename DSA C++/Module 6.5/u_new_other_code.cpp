#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s; 
    int count = 0;

    for(char c : s)
    {
        char lower_c = tolower(c); 
        if(lower_c == 'e' || lower_c == 'g' || lower_c == 'y' || lower_c == 'p' || lower_c == 't')
        {
            count++;
        }
    }

    int result = count / 5;

    cout << result;

    return 0;
}
