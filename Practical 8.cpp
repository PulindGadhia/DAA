#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> graph[100];
bool visited[100];

// Depth First Search
void DFS(int node)
{
    visited[node] = true;
    cout << node << " ";

    for (int i = 0; i < graph[node].size(); i++)
    {
        int next = graph[node][i];

        if (!visited[next])
        {
            DFS(next);
        }
    }
}

// Breadth First Search
void BFS(int start)
{
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int i = 0; i < graph[node].size(); i++)
        {
            int next = graph[node][i];

            if (!visited[next])
            {
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main()
{
    int vertices, edges;
    int u, v, start;

    cout << "Enter number of vertices and edges: ";
    cin >> vertices >> edges;

    cout << "Enter edges:\n";

    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    cout << "Enter starting vertex: ";
    cin >> start;

    cout << "DFS Traversal: ";
    DFS(start);

    for (int i = 0; i < 100; i++)
        visited[i] = false;

    cout << "\nBFS Traversal: ";
    BFS(start);

    cout << endl;

    return 0;
}
