#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int h, x, y;
        cin >> h >> x >> y;

        int first = (h + x - 1) / x;
        int power = 1 + max(0, (h - y + x - 1) / x);
        int mn = min(first, power);
        cout << mn <<endl;
    }

    return 0;
}
