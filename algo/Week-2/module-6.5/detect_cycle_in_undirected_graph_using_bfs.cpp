#include <bits/stdc++.h>
using namespace std;

bool vis[105];
vector<int> adj_list[105];
int parent[105];
bool cycle;

void bfs(int src){
  queue<int> q;
  q.push(src);
  vis[src] = true;
  while(!q.empty()){
    int curr = q.front();
    q.pop();
    for(int child: adj_list[curr]){
      if(vis[child] && parent[curr] != child){
        cycle = true;
      }
      if(!vis[child]){
        q.push(child);
        vis[child] = true;
        parent[child] = curr;
      }
    }
  }
}

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
    memset(parent, -1, sizeof(parent));

    for (int i = 0; i < n;i++){
      if(!vis[i]){
        bfs(i);
      }
    }
      if(cycle){
        cout << "Cycle Detected";
      }else{
        cout << "No Cycle Detected";
      }

      

      return 0;
}