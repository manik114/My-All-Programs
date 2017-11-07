#include <iostream>
#include <vector>
#include <queue>
#include <fstream>
#include <algorithm>
using namespace std;

vector <int> adj[100];

bool visited[100];
int parent[100],dis[100],t,s,n;

void bfs(int s,int n)
{
    //for(int i=0;i<n;++i) visited[i]=0;
    queue<int> q;
    q.push(s);
    visited[s]=1;
    dis[s]=0;
    parent[s]=s;

    while(!q.empty())
    {
        int u=q.front();
        cout<<u<<endl;
        q.pop();

        for(unsigned int i=0; i<adj[u].size(); ++i)
        {
            if(visited[adj[u][i]]==0)
            {
                auto v=adj[u][i];
                visited[v]=1;
                dis[v]=dis[u]+1;
                parent[v]=u;
                q.push(v);
            }
        }
    }
    if(visited[t]==0) return ;

    vector<int> path;
    path.push_back(t);

    auto now=t;

    while(now!=s)
    {
        now=parent[now];
        path.push_back(now);
    }

    for(int i=path.size()-1; i>=0; --i)
        cout<<path[i]<<endl;
}

int main()
{

//    adj[0].push_back(1);
//    adj[0].push_back(2);
//    adj[1].push_back(2);
//    adj[2].push_back(0);
//    adj[2].push_back(3);
//    adj[3].push_back(3);

    cout<<"Enter the node number"<<endl;
    cin>>n;

    for(int i=1; i<=n; ++i)
    {
        cout<<"Enter adjacent node number for node "<<i<<endl;
        cin>>t;

        cout<<"Enter adjacent nodes of "<<i<<endl;

        for(int j=1; j<=t; ++j)
        {
            int u;
            cin>>u;
            adj[i].push_back(u);
        }
    }

    cout<<"Enter the source node and where to go "<<endl;
    cin>>s>>t;

    bfs(s,n);

    return 0;
}
