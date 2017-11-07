#include <iostream>
#include <stdio.h>
using namespace std;
int matrix[100][100];

// Number of vertices in the graph
int row,col,dh,dw;
// A utility function to find the vertex with minimum distance value, from
// the set of vertices not yet included in shortest path tree
int minDistance(int dist[], bool sptSet[])
{
   // Initialize min value
   int min = INT_MAX, min_index;

   for (int v = 0; v < row*col; v++)
     if (sptSet[v] == false && dist[v] <= min)
         min = dist[v], min_index = v;

   return min_index;
}

// A utility function to print the constructed distance array
int printSolution(int dist[])
{
  // printf("Vertex   Distance from Sourcen");
   //for (int i = 0; i < row*col; i++)
      cout<<dist[matrix[dh][dw]];
}
auto a=row*col;
// Funtion that implements Dijkstra's single source shortest path algorithm
// for a graph represented using adjacency matrix representation
void dijkstra(int graph[100][100], int src)
{
     int dist[row*col];     // The output array.  dist[i] will hold the shortest
                      // distance from src to i

     bool sptSet[row*col]; // sptSet[i] will true if vertex i is included in shortest
                     // path tree or shortest distance from src to i is finalized

     // Initialize all distances as INFINITE and stpSet[] as false
     for (int i = 0; i < row*col; i++)
        dist[i] = INT_MAX, sptSet[i] = false;

     // Distance of source vertex from itself is always 0
     dist[src] = 0;

     // Find shortest path for all vertices
     for (int count = 0; count < row*col-1; count++)
     {
       // Pick the minimum distance vertex from the set of vertices not
       // yet processed. u is always equal to src in first iteration.
       int u = minDistance(dist, sptSet);

       // Mark the picked vertex as processed
       sptSet[u] = true;

       // Update dist value of the adjacent vertices of the picked vertex.
       for (int v = 0; v < row*col; v++)

         // Update dist[v] only if is not in sptSet, there is an edge from
         // u to v, and total weight of path from src to  v through u is
         // smaller than current value of dist[v]
         if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
                                       && dist[u]+graph[u][v] < dist[v])
            dist[v] = dist[u] + graph[u][v];
     }

     // print the constructed distance array
     printSolution(dist);
}

int main()
{
    int sw,sh;///source location and destination location
    cin>>col>>row;
    for(int i=0; i<row; ++i)
    {
        for(int j=0; j<col; ++j)
        {
            char in;
            cin>>in;
            if(in=='S')
            {
                sw=j;
                sh=i;
                matrix[i][j]=0;continue;
            }
            else if(in=='D')
            {
                dw=j;
                dh=i;
                matrix[i][j]=0;continue;
            }
            else if(in=='X')
            {
                matrix[i][j]=-1;continue;
            }
            matrix[i][j]=in-'0';
        }
    }
    dijkstra(matrix,matrix[sh][sw]);
    return 0;
}
