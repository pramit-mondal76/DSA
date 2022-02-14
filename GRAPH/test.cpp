#include<iostream>
#include<list>
using namespace std;
class graph{
     int V;
     list<int> *l;//dynamically allocated because we dont't know the size  of the array.
     public:
      graph(int v)
      {
          V=v;
          l=new list<int> [V];
      }
     void addege(int i,int j,bool undir=true)
     {
         l[i].push_back(j);
         if(undir)
         {
             l[j].push_back(i);
         }
     } 
     void printgraph()
     {
         for(int i=0;i<V;i++)
         {
             cout<<i<<"-->";
             for(auto node:l[i])
             {
                 cout<<node<<",";
             }
             cout<<endl;
         }
     }
};

int main(){
    graph g(6);
    g.addege(0, 1);
    g.addege(0, 2);
    g.addege(1,4);
    g.addege(2,3);
    
    g.addege(4, 5);
    
    g.printgraph();
    return 0;
}