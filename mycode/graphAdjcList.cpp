#include <iostream>
#include <list>
#include <vector>
using namespace std;

// 0 -[1]
// 1 -[0,2,3]
// 2 -[1,3,4]
// 3 -[1,2]
// 4 -[2]

class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int v)
    {
        V = v;
        l = new list<int>[V];
    }

    void addEdge(int u, int v)
    { // u--v
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print()
    {
        for (int u = 0; u < V; u++)
        {
            list<int> neighbours = l[u];
            cout << u << "--> ";
            for (int v : neighbours)
            {
                cout << v << " ";
            }
            cout << endl;
        }
    }
};

int main()
{

    // undirected graph
    Graph graph(5);
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);
    graph.addEdge(2, 4);
    graph.print();
    return 0;
}

// this is to represent a weighted graph.
// each pair is (neighbour,weight)
// syntax ->
//     list<pair<int,int>> wGraph;

// 0 - [(1,5)]
// 1-[(0,5),(2,3),(3,8)]
// 2-[(1,3),(3,1),(4,2)]
// 3-[(1,8),(2,1)]
// 4-[(2,2)]