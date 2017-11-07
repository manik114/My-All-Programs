#include<bits/stdc++.h>

using namespace std;
vector<int> adj[100];
class graph
{
    int V;
public:
    graph(int v){V=v;}
    void addEdge(int u,int v)
    {
        adj[u].push_back(v);
    }
    void dfs(int src)
    {
        vector<bool> visited(V,false);
        stack <int> s;
        s.push(src);

        while(!s.empty())
        {
            int u=s.top();
            s.pop();

            if(!visited[u])
            {
                cout<<u<<" ";
                visited[u]=true;
            }
            for(auto i=adj[u].begin();i!=adj[u].end();++i)
            {
                if(!visited[*i])
                {
                    s.push(*i);
                }
            }
        }
    }
};


int main()
{
    graph g(5);
    g.addEdge(1,0);
    g.addEdge(0,2);
    g.addEdge(2,1);
    g.addEdge(0,3);
    g.addEdge(1,4);
    g.dfs(0);
}
