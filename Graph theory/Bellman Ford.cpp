// Source: chatgpt
#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int u, v, weight;
};

void bellmanFord(int V, int E, vector<Edge> &edges, int source) {
    // Step 1: Initialize distances from source to all vertices as infinite
    vector<int> distance(V, INT_MAX);
    distance[source] = 0;
    for (int i = 1; i <= V - 1; ++i) {
        for (const auto &edge : edges) {
            if (distance[edge.u] != INT_MAX && distance[edge.u] + edge.weight < distance[edge.v]) {
                distance[edge.v] = distance[edge.u] + edge.weight;
            }
        }
    }
    for (const auto &edge : edges) {
        if (distance[edge.u] != INT_MAX && distance[edge.u] + edge.weight < distance[edge.v]) {
            cout << "Graph contains a negative-weight cycle" << endl;
            return;
        }
    }

    // Print the distances
    cout << "Vertex Distance from Source" << endl;
    for (int i = 0; i < V; ++i) {
        cout << i << "\t\t" << distance[i] << endl;
    }
}

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;
    vector<Edge> edges(E);
    cout << "Enter the edges (u v weight):" << endl;
    for (int i = 0; i < E; ++i) {
        cin >> edges[i].u >> edges[i].v >> edges[i].weight;
    }
    int source;
    cout << "Enter the source vertex: ";
    cin >> source;
    bellmanFord(V, E, edges, source);

    return 0;
}
