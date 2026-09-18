#include <bits/stdc++.h>
using namespace std;

class Students {
public:
    int id;
    string name;
    char section;
    int total;
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        Students b;
        b.total = -1;
        b.id = 1001;  

        for (int j = 0; j < 3; j++) {  
            Students a;
            cin >> a.id >> a.name >> a.section >> a.total;

            if (a.total > b.total) {
                b = a;
            } else if (a.total == b.total && a.id < b.id) {
                b = a;
            }
        }

        cout << b.id << " " << b.name << " " << b.section << " " << b.total << endl;
    }

    return 0;
}
