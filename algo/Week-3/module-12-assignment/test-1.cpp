#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

class Edge {
public:
    int a, b;
    long long c;
    Edge(int a, int b, long long c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int main() {
    int n, e;
    cin >> n >> e;
    vector<Edge> edge_list;
    
    for (int i = 0; i < e; i++) {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }

    int src;
    cin >> src;

    vector<long long> dist(n + 1, INF);
    dist[src] = 0;
 
    for (int i = 1; i < n; i++) {
        for (const auto& edge : edge_list) {
            int u = edge.a;
            int v = edge.b;
            long long w = edge.c;
            
            if (dist[u] != INF && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }
 
    bool has_negative_cycle = false;
    vector<bool> in_negative_cycle(n + 1, false);
    
    for (const auto& edge : edge_list) {
        int u = edge.a;
        int v = edge.b;
        long long w = edge.c;
        
        if (dist[u] != INF && dist[u] + w < dist[v]) {
            has_negative_cycle = true;
            in_negative_cycle[v] = true; 
            dist[v] = -INF;  
        }
    }
 
    if (has_negative_cycle) { 
        for (int i = 1; i < n; i++) {
            for (const auto& edge : edge_list) {
                int u = edge.a;
                int v = edge.b;
                
                if (dist[u] == -INF && dist[v] != -INF) {
                    dist[v] = -INF;
                    in_negative_cycle[v] = true;
                }
            }
        }
    }

    int t;
    cin >> t;
    
    if (has_negative_cycle) {
        cout << "Negative Cycle Detected" << endl;
    } else {
        while (t--) {
            int dest;
            cin >> dest;
            
            if (dist[dest] == INF) {
                cout << "Not Possible" << endl;
            } else {
                cout << dist[dest] << endl;
            }
        }
    }

    return 0;
}