#include<bits/stdc++.h>
using namespace std;

class Cricketer{

    public:

    int jersey_no;
    string country;

    Cricketer(int jersey_no,string country)
    {
        this->jersey_no=jersey_no;
        this->country=country;
    }


};

int main(){

    Cricketer* dhoni=new Cricketer(07,"India");
    Cricketer* kholi=new Cricketer(18,"India");

    cout<<dhoni->jersey_no<<" "<<dhoni->country<<endl;
    cout<<kholi->jersey_no<<" "<<kholi->country<<endl;

    cout<<"After copy dhoni to kholi"<<endl;


    *kholi=*dhoni;  //nicher same kaj ta ay bave o kora jai .
    
    // kholi->jersey_no=dhoni->jersey_no;
    // kholi->country=dhoni->country;

    delete dhoni;

     
    cout<<kholi->jersey_no<<" "<<kholi->country<<endl;


    return 0;
}