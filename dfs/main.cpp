#include <bits/stdc++.h>

using namespace std;
vector <int> adj[100];
bool visited[100],edge[100];
stack <int> s;
int finishing[100];
void dfs(int a)
{
    for(int i=0;i<100;++i) finishing[i]=0;
    s.push(a);
    visited[a]=1;
    while(!s.empty())
    {
        auto u=s.top();
        s.pop();
        finishing[u]++;
        for(int i=0;i<adj[u].size();++i)
        {
            auto v=adj[u][i];
            if(visited[v]==0)
            {
                cout<<v<<" ";
                visited[v]=1;
                s.push(u);
                s.push(v);
                break;
            }
        }
    }
}

int main()
{

    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[4].push_back(3);
    dfs(1);
    //for(int i=0;i<4;i++) cout<<finishing[i]<< " ";
    return 0;
}
