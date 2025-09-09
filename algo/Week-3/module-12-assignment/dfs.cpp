#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1000];
bool vis[1000];

void dfs(int src) {
    cout << src <<" ";
    vis[src] = true;
    for(auto child: adj_list[src]){
        if(vis[child] == false){
            dfs(child);
        }
    }
};

int main(){
    // !

    int n, e; // node, edge
    cin >> n >> e;
    while(e--){
        // cout << e <<" ";
        int firstNode, secondNode;
        cin >> firstNode>> secondNode;
        adj_list[firstNode].push_back(secondNode);
        adj_list[secondNode].push_back(firstNode);
    }
    memset(vis, false, sizeof(vis));
    dfs(0);
    return 0;
}