#include<bits/stdc++.h>
using namespace std;

vector<int> graph[5];
bool visited[5];

void dfs(int src)
{
   visited[src]=1;
   for(int i=0;i<graph[src].size();i++)
   {
        int next=graph[src][i];
        if(visited[next]==0)
        {
            dfs(next);
        }
   }
}
int main()
{
    int nodes,edges;
    cout<<"nodes & edges are: ";
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u >>v;
        graph[u].push_back(v);
        graph[v].push_back(u);      
    }

    dfs(0);
    for(int i=0;i<nodes;i++)
    {
        if(visited[i]==1)
        {
            cout<<"node "<<i<<" is visited."<<endl;
        }
        else
        {
            cout<<"node "<<i<<" is not visited."<<endl;
        }
    }
    return 0;
}