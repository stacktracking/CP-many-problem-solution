#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int* a=new int[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int m;
    cin>>m;

    int* b=new int[m];

    for(int j=0;j<n;j++)
    {
        b[j]=a[j];
    }

    for(int k=n;k<m;k++)
    {
        cin>>b[k];
    }

     delete[] a;

    for(int l=0;l<m;l++)
    {
        cout<<b[l]<<" ";
    }

    return 0;
}