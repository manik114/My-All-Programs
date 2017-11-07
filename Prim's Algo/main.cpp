#include <bits/stdc++.h>
#define pi pair<int,int>
# define inf 0x3f3f3f3f
using namespace std;

class graph
{
    int v;
    list<pi> *adj;
public:
    graph(int v)
    {
        this->v=v;
        adj=new list<pi> [v];
    }
    void addedge(int u,int v,int w)
    {
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    void primMST(int s);
};

void graph::primMST(int s)
{
    priority_queue<pi,vector <pi>,greater<pi> > pq;
    vector <int> key(v,inf);
    vector<int> parent(v,-1);
    vector <bool> inMST(v,false);
    pq.push(make_pair(0,s));
    key[s]=0;
    while(!pq.empty())
    {
        auto u=pq.top().second;
        pq.pop();
        inMST[u]=true;
        list <pair<int,int> >::iterator it;
        for(it=adj[u].begin();it!=adj[u].end();++it)
        {
            int vv=(*it).first;
            int weight=(*it).second;
            if(inMST[vv]==false&&key[vv]>weight)
            {
                key[vv]=weight;
                pq.push(make_pair(key[vv],vv));
                parent[vv]=u;
            }
        }
    }
    cout<<"Vertex Distance from source "<<endl;
    for(int i=1;i<v;++i)
    {
        printf("%d \t\t %d\n",parent[i],i);
    }
}

int main()
{
    int V = 9;
    graph g(V);

    //  making above shown graph
    g.addedge(0, 1, 4);
    g.addedge(0, 7, 8);
    g.addedge(1, 2, 8);
    g.addedge(1, 7, 11);
    g.addedge(2, 3, 7);
    g.addedge(2, 8, 2);
    g.addedge(2, 5, 4);
    g.addedge(3, 4, 9);
    g.addedge(3, 5, 14);
    g.addedge(4, 5, 10);
    g.addedge(5, 6, 2);
    g.addedge(6, 7, 1);
    g.addedge(6, 8, 6);
    g.addedge(7, 8, 7);
    g.primMST(0);
    return 0;
}
