#include<bits/stdc++.h>
using namespace std;

int v,e;
int parent[100];
int cost[100][100];

int find(int i)
{
    while(parent[i]!=i)
    {
        i=parent[i];
    }
    return i;
}
void union1(int i,int j)
{
    int a=find(i);
    int b=find(j);
    parent[a]=b;
}
void krushkalMST()
{
    int mincost=0;
    int edge_count=0;
    while(edge_count<v-1)
    {
        int min=INT_MAX,a=-1,b=-1;
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
               if(find(i)!=find(j) && cost[i][j]<min)
               {
                   min=cost[i][j];
                   a=i;
                   b=j;
               }
            }
        }
        union1(a,b);
        cout<<"Edge "<<edge_count++<<":("<<a<<" , "<<b<<") cost :"<<min<<endl;
        mincost +=min;

    }
    cout<<"Minimum cost ="<<mincost<<endl;
}

int main(){
    freopen("input.txt","r",stdin);
    cin>>v>>e;
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cost[i][j]=INT_MAX;


        }
    }
    for(int j=0;j<e;j++)
    {
        int m,n;
        cin>>m>>n;
        cin>>cost[m][n];
        cost[n][m];


    }
    for(int i=0;i<v;i++)
    {
        parent[i]=i;
    }
    krushkalMST();
    return 0;
}