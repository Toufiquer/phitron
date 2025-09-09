#include <bits/stdc++.h>
using namespace std;

static const long long INF = INT_MAX;

int main() { 

    int n, e;
    cin >> n >> e;
     
    vector<vector<long long>> dist(n + 1, vector<long long>(n + 1, INF));
 
    for (int i = 1; i <= n; ++i) {
        dist[i][i] = 0;
    }
 
    for (int i = 0; i < e; ++i) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        dist[u][v] = min(dist[u][v], w);
    }
 
    for (int k = 1; k <= n; ++k) {
        for (int i = 1; i <= n; ++i) { 
            if (dist[i][k] == INF) continue;
            for (int j = 1; j <= n; ++j) { 
                if (dist[k][j] == INF) continue;
                 
                long long via_k = dist[i][k] + dist[k][j];
                 
                if (via_k < dist[i][j]) {
                    dist[i][j] = via_k;
                }
            }
        }
    }
 
    int q;
    cin >> q;
    while (q--) {
        int x, y;
        cin >> x >> y;
         
        if (dist[x][y] == INF) {
            cout << "-1\n";
        } else { 
            cout << dist[x][y] << "\n";
        }
    }

    return 0;
}