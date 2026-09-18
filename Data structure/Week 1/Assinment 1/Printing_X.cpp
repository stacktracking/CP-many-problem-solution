#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mid =n/2; 

    for (int i=0;i<n;i++) {
    
        if (i<mid) {
         
            for (int j=0;j<i;j++) {
                cout << " ";
            }

            cout << "\\";

            for (int j = 0; j <(n-2-2*i); j++) {
                cout << " ";
            }

           
            cout << "/" << endl;
        }

     
        else if (i == mid) {
         
            for (int j = 0; j < mid; j++) {
                cout << " ";
            }

           
            cout << "X" << endl;
        }

     
        else {
           
            for (int j = 0; j < n - 1 - i; j++) {
                cout << " ";
            }
            cout << "/";

            for (int j = 0; j < 2 * (i - mid) - 1; j++) {
                cout << " ";
            }
            cout << "\\" << endl;
        }
    }

    return 0;
}
