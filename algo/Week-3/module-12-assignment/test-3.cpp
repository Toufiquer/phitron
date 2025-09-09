#include <bits/stdc++.h>
using namespace std;

 
struct DSU {
    vector<int> parent;
    vector<int> sz;

    DSU(int n) {
        parent.resize(n + 1);
        iota(parent.begin(), parent.end(), 0);
        sz.assign(n + 1, 1);
    }

    int find(int i) {
        if (parent[i] == i) {
            return i;
        }
        return parent[i] = find(parent[i]);
    }

    bool unite(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);
        if (root_i != root_j) {
            if (sz[root_i] < sz[root_j]) {
                swap(root_i, root_j);
            }
            parent[root_j] = root_i;
            sz[root_i] += sz[root_j];
            return true;  
        }
        return false;  
    }
};

int main() { 

    int n, e;
    cin >> n >> e;

    DSU dsu(n);
    int cycle_edges = 0;

    for (int i = 0; i < e; ++i) {
        int u, v;
        cin >> u >> v;
        if (!dsu.unite(u, v)) {
            cycle_edges++;
        }
    }

    cout << cycle_edges << endl;

    return 0;
}