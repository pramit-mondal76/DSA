#include <iostream>
#include "bfs_queue.cpp"
#include "addMatrix.c"
using namespace std;
int visited[10];

int BFS(int v)
{
    int i, j;
    for (i = 0; i < v; i++)
        visited[i] = 0;
    insert(v);
    visited[v] = 1;
    while (!isempty())
    {
        i = del();
        cout << i + 'A';
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] == 1)
            {
                if (visited[j] == 0)
                {
                    insert(j);
                    visited[j] = 1;
                }
            }
        }
        cout << endl;
    }
    return 0;
}

int main()
{
    system("clear");
    int v;
    readGraph();
    showgraph();
    cout << "Enter the  vertex " << endl;
    cin >> v;
    BFS(v);
    return 0;
}