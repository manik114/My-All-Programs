#include <bits/stdc++.h>
#define Pair pair<int,int>
#define inf 0x3f3f3f3f

using namespace std;

class graph
{
    int V;
    vector<pair<int,int> > adj[100];

public:
    graph(int V)
    {
        this->V=V;
    }
    void addEdge(int u,int v,int w)
    {
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    void prim()
    {
        priority_queue<Pair,vector<Pair>,greater<Pair> > pq;
        int src=0;
        vector<int> key(V,inf);
        vector<int> parent(V,-1);
        vector<bool> inMST(V,false);

        pq.push(make_pair(0,src));
        key[src]=0;

        while(!pq.empty())
        {
            int u=pq.top().second;
            pq.pop();

            inMST[u]=true;

            for(auto it=adj[u].begin();it!=adj[u].end();++it)
            {
                int v=it->first;
                int w=it->second;

                if(!inMST[v]&&key[v]>w)
                {
                    key[v]=w;
                    pq.push(make_pair(key[v],v));
                    parent[v]=u;
                }
            }
        }
        for(int i=1;i<V;++i)
        {
            cout<<parent[i]<<"-"<<i<<endl;
        }
    }
};

int main()
{
    int V=9;
    graph g(V);
    g.addEdge(0,1,4);
    g.addEdge(0,7,8);
    g.addEdge(1,2,8);
    g.addEdge(1,7,11);
    g.addEdge(2,3,7);
    g.addEdge(2,8,2);
    g.addEdge(2,5,4);
    g.addEdge(3,4,9);
    g.addEdge(3,5,14);
    g.addEdge(4,5,10);
    g.addEdge(5,6,2);
    g.addEdge(6,7,1);
    g.addEdge(6,8,6);
    g.addEdge(7,8,7);
    g.prim();

    return 0;
}
