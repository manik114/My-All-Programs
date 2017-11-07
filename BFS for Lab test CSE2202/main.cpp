#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector <int> adj[100];
int parent[100],dis[100]= {0};
class graph
{
    int V;
public:
    void addEdge(int u,int v)
    {
        adj[u].push_back(v);
    }
    void bfs(int source,int target)
    {
        bool visited[100];
        for(int i=0; i<100; ++i) visited[i]=false;
        queue<int> q;
        q.push(source);
        visited[source]=true;
        dis[source]=0;
        parent[source]=source;
        while(!q.empty())
        {
            int a=q.front();
            q.pop();
            cout<<a<<endl;
            for(auto i=adj[a].begin(); i!=adj[a].end(); ++i)
            {
                if(!visited[*i])
                {
                    visited[*i]=true;
                    dis[*i]=dis[a]+1;
                    parent[*i]=a;
                    q.push(*i);
                }
            }
        }
        vector<int> v;
        int now=target;
        while(now!=source)
        {
            now=parent[now];
            v.push_back(now);
        }
        for(int i=0;i<v.size();++i)
            cout<<v[i]<<" ";
    }
};

int main()
{
    graph g;
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,3);
    g.addEdge(3,3);
    g.bfs(2,1);

    return 0;
}
