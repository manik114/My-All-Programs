#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <list>
using namespace std;

vector<int> adj[100],vv;
int dis[100],parent[100],s,t=2,n,edge[100],visited[100];
bool time[100];
void dfs(auto s,int n)
{
    for(int i=0;i<n;++i) edge[i]=visited[i]=0;
    stack<int> st;
    st.push(s);
    visited[s]=1;
    //cout<<s<<" ";
    while(!st.empty())
    {
        auto u=st.top();
        st.pop();
        cout<<u<<" ";
        while(edge[u]<adj[u].size())
        {
            int v=adj[u][edge[u]];
            edge[u]++;
            if(visited[v]==0)
            {
                //cout<<v<<" ";
                visited[v]=1;
                st.push(u);
                st.push(v);
                break;
            }
        }
    }
}

int main()
{
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[2].push_back(5);
    adj[2].push_back(6);
    adj[3].push_back(4);
    adj[3].push_back(7);
    adj[4].push_back(8);
    adj[4].push_back(3);
    adj[5].push_back(1);
    adj[5].push_back(6);
    adj[6].push_back(7);
    adj[7].push_back(6);
    adj[7].push_back(8);
    dfs(1,8);
    cout<<endl;
    sort(time,time+8);
    for(int i=0;i<8;i++) cout<<time[i]<<" ";
        //for(int i=0;i<vv.size();++i) cout<<vv[i]<<" ";
    return 0;
}
