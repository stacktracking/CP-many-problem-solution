#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    set<int>st; //set duplicate value remove kore dei and sort kore rakhe value. set BST Inorder(left->root->right) follow kore .
    while(n--)
    {
        int val;
        cin>>val;
        st.insert(val);

    }
    for(auto it = st.begin(); it!=st.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}