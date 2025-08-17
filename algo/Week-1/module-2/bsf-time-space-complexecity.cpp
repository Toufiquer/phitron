#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1000];
bool vis[1000];

void bfs(int src){
    queue<int> q; // O(v) -> space cmoplexecity
    q.push(src);
    vis[src] = true;

    while(!q.empty()){ // O(v) -> v is node count that mean vertix.
        int curr = q.front();
        q.pop();

        cout << curr << " ";

        for (auto child: adj_list[curr]){ // O(e) -> e is edge [it is not depend on n or parent loop]
            if(vis[child] == false){
                q.push(child);
                vis[child] = true;
            }
            }
    }
}

int main(){
    // !

    int n, e;
    cin >> n >> e;
    while(e--){
        int a, b;
        cin >> a>> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    bfs(0); // O(v + e) // maximam time complexecity
    return 0;
}