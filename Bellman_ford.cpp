#include<iostream>
#include <climits>
using namespace std;
void bellmanFord(int graph[][3],int V,int E,int src)
{
        int d[V];
        for(int i=0;i<V;i++)
           d[i] = INT_MAX;

        d[src]=0;
        for(int j=0;j<V-1;j++)
        {
            for(int k=0;k<E;k++)
            {
                if(d[graph[k][0]]!=INT_MAX && d[graph[k][0]] +graph[k][2]<d[graph[k][1]])
                {
                    d[graph[k][1]]=d[graph[k][0]] +graph[k][2];
                }
            }
        }  
        for (int i = 0; i < E; i++) {
          int x = graph[i][0];
          int y = graph[i][1];
          int weight = graph[i][2];
          if (d[x] != INT_MAX &&
                   d[x] + weight < d[y])
            cout << "Graph contains negative"
                    " weight cycle"
                 << endl;


        } 
        cout << "Vertex Distance from Source" << endl;
        for (int i = 0; i < V; i++)
           cout << i << "\t\t" << d[i] << endl;

}

int main()
{
    int V = 5; 
    int E = 8; 
    int graph[][3] = { { 0, 1, -1 }, { 0, 2, 4 },
                       { 1, 2, 3 }, { 1, 3, 2 },
                       { 1, 4, 2 }, { 3, 2, 5 },
                       { 3, 1, 1 }, { 4, 3, -3 } };
 
    bellmanFord(graph, V, E, 0);
    return 0;
}