#include <iostream>
#include <algorithm>
using namespace std;

struct Edge
{
    int u, v, w;
};

int parent[100];

int find(int x)
{
    while (parent[x] != x)
        x = parent[x];

    return x;
}

int main()
{
    int n, e;
    Edge edges[100];

    cout << "Enter number of vertices and edges: ";
    cin >> n >> e;

    cout << "Enter edges (u v weight):\n";

    for (int i = 0; i < e; i++)
    {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    // Sort edges by weight
    sort(edges, edges + e,
         [](Edge a, Edge b)
         {
             return a.w < b.w;
         });

    // Initialize parent array
    for (int i = 0; i < n; i++)
        parent[i] = i;

    int totalCost = 0;
    int count = 0;

    cout << "\nEdges in Minimum Spanning Tree:\n";

    for (int i = 0; i < e; i++)
    {
        int u = edges[i].u;
        int v = edges[i].v;
        int w = edges[i].w;

        int pu = find(u);
        int pv = find(v);

        // Add edge if it does not form a cycle
        if (pu != pv)
        {
            cout << u << " - " << v
                 << " : " << w << endl;

            parent[pu] = pv;

            totalCost += w;
            count++;

            if (count == n - 1)
                break;
        }
    }

    if (count != n - 1)
    {
        cout << "Graph is not connected.\n";
    }
    else
    {
        cout << "Minimum cost = " << totalCost << endl;
    }

    return 0;
}
