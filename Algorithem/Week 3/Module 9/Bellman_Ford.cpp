#include<bits/stdc++.h>
using namespace std;
class Edge
{
    public: 
    int a,b,c;
    Edge(int a,int b ,int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

};

int dis[1005];
int main()
{
    int n,m;
    cin>>n>>m;
    vector<Edge>edge_list;
    while(m--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        edge_list.push_back(Edge(a,b,c));
    }
    for(int i = 0 ; i<n ; i++)
        dis[i] =INT_MAX;
    dis[0] = 0;

    for(int i = 0; i<n-1 ; i++)     // O(V);
    {
    for(Edge en : edge_list)        //O(E)
    {
        int a,b,c;
        a = en.a;                   //total time complex : O(VE);
        b = en.b;
        c = en.c;
        if(dis[a] !=INT_MAX && dis[a]+c < dis[b])
        {
            dis[b] = dis[a]+c;
        }
    }
    }

    for(int i = 0 ; i<n ; i++)
        cout<<i<<" -> "<<dis[i]<<endl;
    return 0;
}