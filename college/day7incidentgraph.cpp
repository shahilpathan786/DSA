#include <iostream>
#include <vector>
using namespace std;

int main() {
    int V, E;
    cout << "Enter vertices and edges: ";
    cin >> V >> E;

    vector<vector<int>> inc(V, vector<int>(E, 0));

    cout << "Enter edges (u v):\n";
    for (int e = 0; e < E; e++) {
        int u, v;
        cin >> u >> v;

        inc[u][e] = 1;
        inc[v][e] = 1;
    }

    cout << "\nIncidence Matrix:\n";
    for (int i = 0; i < V; i++) {
        for (int e = 0; e < E; e++) {
            cout << inc[i][e] << " ";
        }
        cout << "\n";
    }

    return 0;
}