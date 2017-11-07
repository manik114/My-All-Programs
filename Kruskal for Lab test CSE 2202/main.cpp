#include <bits/stdc++.h>

using namespace std;

class graph
{
    int V;
    int parent[100];
    vector<pair<int,pair<int,int> > >edges;
    vector<pair<int,pair<int,int> > >v;

public:
    graph(int V)
    {
        for(int i=0;i<V;++i)
        {
            parent[i]=i;
        }
    }
    void addEdges(int u,int v,int w)
    {
        edges.push_back(make_pair(w,make_pair(u,v)));
    }
    int find_set(int i)
    {
        if(i==parent[i]) return i;
        else
            return find_set(parent[i]);
    }
    void union_set(int u,int v)
    {
        parent[u]=parent[v];
    }
    void kruskal()
    {
        sort(edges.begin(),edges.end());
        for(int i=0;i<edges.size();++i)
        {
            int x=find_set(edges[i].second.first);
            int y=find_set(edges[i].second.second);
            if(x!=y)
            {
                v.push_back(edges[i]);
                union_set(x,y);
            }
        }
    }

    void print()
    {
        cout<<"Edge:" <<"weight" <<endl;
        for(int i=0;i<v.size();++i)
        {
            cout<<v[i].second.first << "-"<<v[i].second.second<<":"<<v[i].first<<endl;
        }
    }
};

int main()
{
    graph g(6);
    g.addEdges(0,1,4);
    g.addEdges(0,2,4);
    g.addEdges(1,2,2);
    g.addEdges(1,0,4);
    g.addEdges(2,0,4);
    g.addEdges(2,1,2);
    g.addEdges(2,3,3);
    g.addEdges(2,5,2);
    g.addEdges(2,4,4);
    g.addEdges(3,2,3);
    g.addEdges(3,4,3);
    g.addEdges(4,2,4);
    g.addEdges(4,3,3);
    g.addEdges(5,2,2);
    g.addEdges(5,4,3);

    g.kruskal();
    g.print();


    return 0;
}
