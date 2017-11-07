#include <bits/stdc++.h>
#define inf 0x3f3f3f3f

using namespace std;

class graph{
    int V;
    vector<pair<int,pair<int,int>> > edges; //pair first weight the connected vertex
    bool negEdge = false;

public:
    graph(int V);
    void addEdge(int u,int v,int w);
    void bellmanFord(int source);
};

graph::graph(int V)
{
    this->V=V;
}
void graph::addEdge(int u,int v,int w)
{
    edges.push_back(make_pair(w,make_pair(u,v))); //inserting into the vector
}

void graph::bellmanFord(int source)
{
    vector<int> dist(this->V,inf);

    dist[source]=0;

    for(int i=1;i<this->V;++i)
    {
        for(auto it=edges.begin();it!=edges.end();++it)
        {
            auto u=it->second.first;//first vertex
            auto v=it->second.second;//second vertex
            auto w=it->first;//their weight

            if(dist[u]+w<dist[v])
            {
                dist[v]=dist[u]+w;
            }
        }
    }
    for(auto it=edges.begin();it!=edges.end();++it)
    {
            auto u=it->second.first;
            auto v=it->second.second;
            auto w=it->first;

            if(dist[u]+w<dist[v])
            {
                negEdge=true;
            }
    }

    if(!negEdge)
    {
        for(int i=0;i<V;++i)
        {
            cout<<i<<"->"<<dist[i]<<endl;
        }
    }
}


int main()
{
    int V=5;
    graph g(V);
    g.addEdge(0,1,7);
    g.addEdge(0,4,6);
    g.addEdge(1,2,9);
    g.addEdge(1,3,-3);
    g.addEdge(2,0,2);
    g.addEdge(2,3,7);
    g.addEdge(3,4,-2);
    g.addEdge(4,1,8);
    g.addEdge(4,2,-4);
    g.addEdge(4,3,5);

    g.bellmanFord(0);
return 0;
}
