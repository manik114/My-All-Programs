#include <bits/stdc++.h>
#define pi pair<int,int>
#define inf 0x3f3f3f3f

using namespace std;

class graph
{
    int V;
    vector <pi> adj[100]; //adjacency list

public:
    graph(int V){this->V=V;}  //initializing vertex amount

    void addEdge(int u,int v,int w)  //adding weight between two nodes
    {
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    void shortestPath(int source)  ///main function to calculate the shortest path
    {
        priority_queue<pi,vector<pi>,greater<pi> >pq;

        vector<int> dist(V,inf); //initializing every distance inf

        pq.push(make_pair(0,source));
        dist[source]=0;

        while(!pq.empty())
        {
            int u=pq.top().second;  ///vertex label
            pq.pop();

            for(auto i=adj[u].begin();i!=adj[u].end();++i)
            {
                int v=i->first;
                int weight=i->second;
                if(dist[v]>dist[u]+weight) ///checking if present path cost is greater
                {
                    dist[v]=dist[u]+weight;  ///updating
                    pq.push(make_pair(dist[v],v)); ///inserting new path cost for v
                }
            }
        }
        ///PRINTING

        printf("Vertex Distance from Source\n");
        for(int i=0;i<V;++i)
            printf("%d \t\t %d\n",i,dist[i]);
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
    //g.addEdge(8,3,2);

    g.shortestPath(0);
    return 0;
}
