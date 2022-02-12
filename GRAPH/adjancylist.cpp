#include <iostream>
#include <list>
using namespace std;
class graph
{
    int V;
    list<int> *l; // we use dynamic memory allocation becaues size of the array we don't know..
public:
    graph(int v)
    {
        V = v;
        l = new list<int>[V]; // we have array v and each of the array list is linkedlist..
    }
    void addege(int i, int j, bool undir = true)
    {
        l[i].push_back(j);
        if (undir)
        {

            l[j].push_back(i);
        }
    }
    void printlist()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << "-->";
            for (auto node : l[i])
            {
                cout << node << ",";
            }
            cout << endl;
        }
    }
};

int main()
{
    graph g(6);
    g.addege(0, 1);
    g.addege(0, 4);
    g.addege(2, 1);
    g.addege(3, 4);
    g.addege(4, 5);
    g.addege(2,3);
    g.addege(3,5);
    g.printlist();
    return 0;
}