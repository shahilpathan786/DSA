#include <iostream>
#include <vector>
using namespace std;

int main() {
    int V, E;
    cout << "Enter vertices and edges: ";
    cin >> V >> E;

    vector<vector<int>> adj(V, vector<int>(V, 0));

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;

        adj[u][v] = 1;
        adj[v][u] = 1;  // Undirected graph
    }

    cout << "\nAdjacency Matrix:\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << adj[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}