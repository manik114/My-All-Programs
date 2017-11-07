#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#define maximum 100
using namespace std;

class stack
{
    int a[maximum]={0};
    int Top=-1;
public:
    void push(int c)
    {
        if(Top==maximum) cout<<"Overflow"<<endl;
        else
        {
            a[++Top]=c;
        }
    }
    void pop()
    {
        if(Top==-1) cout<<"Underflow"<<endl;
        else Top--;
    }
    int top()
    {
        return a[Top];
    }
    bool isempty()
    {
        if(Top==-1) return true;
        else return false;
    }
    int size()
    {
        return Top-1;
    }
}s,s1;

//class vector
//{
//    int a[maximum]={0};
//    int down=-1;
//public:
//    void push_back(int b)
//    {
//        if(down==maximum) cout<<"Overflow "<<endl;
//        else
//            a[++down]=b;
//    }
//}v;
vector <int> v[101];
bool visited[51];

void dfs(int node)
{
    s.push(node);
    cout<<"The order of visiting the nodes is : ";cout<<node<<" ";
    visited[node]=1;
    while(s.size())
    {
        int ck=0,m=s.top();
        for(unsigned i=0;i<v[m].size();i++)
        {
            int n=v[m][i];
            if(visited[n])
                continue;
            else
            {
                s.push(n);
                visited[n]=1;
                ck=1;
                cout<<n<<" ";
            }
        }
        if(ck==0) s.pop();
    }
}
vector<int > adj[10];
bool visit[10];
void TopSort(int s)
{
    visit[s]=true;
    for(unsigned i=0;i<adj[s].size();++i)
    {
        if(visit[adj[s][i]]==false)
            TopSort(adj[s][i]);
    }
    s1.push(s);
}

int main()
{
    int a,b;cout<<"Enter the node and edges number "<<endl;
    cin>>a>>b;
    int s,t;
    for(int i=0;i<b;i++)
    {
        cin>>s>>t;
        v[s].push_back(t);
        v[t].push_back(s);
    }
    int item;
    cout<<"Enter the node to search "<<endl;
    cin>>item;
    dfs(item);
    cout<<"The order after topological sort "<<endl;
    for(int i=1;i<=a;i++)
    {
        if(visit[i]==false)
            TopSort(i);
    }
    while(!s1.isempty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    return 0;
}
