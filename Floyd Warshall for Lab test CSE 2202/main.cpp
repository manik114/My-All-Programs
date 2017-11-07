#include <bits/stdc++.h>
#define V 4
#define inf 0x3f3f3f3f
using namespace std;

void print(int dist[][V])
{
    for(int i=0; i<V; ++i)
    {
        for(int j=0; j<V; ++j)
        {
            if(dist[i][j]==inf)
            {
                printf("%7s","inf");
            }
            else
                printf("%7d",dist[i][j]);
        }
        cout<<endl;
    }
}

void floydWarshall(int graph[][V])
{
    int dist[V][V];
    for(int i=0; i<V; ++i)
        for(int j=0; j<V; ++j)
            dist[i][j]=graph[i][j];
    for(int k=0; k<V; ++k)
        for(int i=-0; i<V; ++i)
            for(int j=0; j<V; ++j)
            {
                if(dist[i][k]+dist[k][j]<dist[i][j])
                    dist[i][j]=dist[i][k]+dist[k][j];
            }
    print(dist);
}

int main()
{
    int graph[V][V]= {{0,5,inf,10},
        {inf,0,3,inf},
        {inf,inf,0,1},
        {inf,inf,inf,0}
    };
    floydWarshall(graph);


    return 0;
}
