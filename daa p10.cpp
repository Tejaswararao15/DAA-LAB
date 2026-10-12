#include <iostream>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, w;
};

bool compare(Edge a, Edge b) {
    return a.w < b.w;
}

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    Edge edges[100];

    cout << "Enter edges (u v weight):\n";
    for (int i = 0; i < E; i++) {
        cin >> edges[i].u >> edges[i].v
            >> edges[i].w;
    }

    sort(edges, edges + E, compare);

    int parent[100];
    for (int i = 0; i < V; i++)
        parent[i] = i;

    int total = 0, count = 0;

    cout << "Minimum Spanning Tree:\n";

    for (int i = 0; i < E; i++) {
        int u = edges[i].u;
        int v = edges[i].v;

        int a = u, b = v;

        while (parent[a] != a)
            a = parent[a];

        while (parent[b] != b)
            b = parent[b];

        if (a != b) {
            cout << u << " - " << v
                 << " : " << edges[i].w << endl;

            parent[a] = b;
            total += edges[i].w;
            count++;

            if (count == V - 1)
                break;
        }
    }

    if (count == V - 1)
        cout << "Total weight = " << total << endl;
    else
        cout << "MST does not exist." << endl;

    return 0;
}