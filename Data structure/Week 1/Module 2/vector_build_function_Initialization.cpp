#include<bits/stdc++.h>
using namespace std;

int main()
{
    //vector<data_type>vector_name; type 1:
    // vector<int>v; complex: O(1)
    // cout<<v.size()<<" "<<endl;

    //vector<data_type>vector_name(size); //type 2:
    // vector<int>v(5); //complex: O(N)
    // cout<<v.size()<<" "<<endl;

    // vector<data_type>vector_name(size,set_the_value); type 3:
    // vector<int>v(5,1); //complex: O(N)

    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";

    // }


    // vector<data_type>vector_name(copy the all value of first vector); type 4:
    // vector<int>v(5,1); //complex: O(N)
    // vector<int>v2(v);
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v2[i]<<" ";
    // }



    // vector<data_type>vector_name(array_nm,array_nm+size); type 5: array element copy kore vector a rakha;
    int arr[5]={10,20,30};
    vector<int>v(5,1); //complex: O(N)

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";

    }


    return 0;
}