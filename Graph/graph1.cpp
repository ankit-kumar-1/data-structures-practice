#include <iostream>
#include <map>
#include <list>
#include <queue>
using namespace std;

template <typename T>

class Graph
{
    // map<T, list<T>> adjList;

    // weight graph
public:
    map<T, list<T>> adjList;

    void addEdge(T u, T v, bool direction)
    {
        // direction = 0 -> undirected graph
        // direction = 1 -> directed graph

        // for u->v

        adjList[u].push_back(v);

        // check v->u
        if (direction == 0)
        {
            adjList[v].push_back(u);
        }
    }

    void printAdj()
    {
        for (auto i : adjList)
        {
            cout << i.first << "->";

            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }

    void bfs(int src)
    {
        queue<int> q;
        q.push(src);
        map<int, bool> visited;
        visited[src] = true;

        while (!q.empty())
        {
            int front = q.front();
            cout << front << " ";
            q.pop();

            for (auto neighbour : adjList[front])
            {
                if (!visited[neighbour])
                    q.push(neighbour);
                visited[neighbour] = true;
            }
        }
    }
};

int main()
{
    Graph<int> g;
    // Graph<char>g;

    g.addEdge(0, 1, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(1, 3, 0);
    g.addEdge(2, 3, 0);
    g.addEdge(2, 4, 0);
    g.addEdge(3, 4, 0);

    cout << "Printing Adjacency List " << endl;
    g.printAdj();

    cout << "Printing BFS Traversal" << endl;

    g.bfs(0);

    return 0;
}