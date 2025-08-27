#include <bits/stdc++.h>
using namespace std;

bool vis[105];
vector<int> adj_list[105];
bool pathVis[105];
bool cycle;

void dfs(int src){
  vis[src] = true;
  pathVis[src] = true;
  for (int child : adj_list[src])
  {
    if(vis[child] && pathVis[src]){
      cycle = true;
    }
    if(!vis[child]){
      pathVis[child] = src;
      dfs(child);
    }
  }
  pathVis[src] = false;
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
    }
    memset(vis, false, sizeof(vis));
    memset(pathVis, false, sizeof(pathVis));

    for (int i = 0; i < n;i++){ 
      if (!vis[i])
      {
        dfs(i);
      }
    }
      if(cycle){
        cout << "Cycle Detected";
      }else{
        cout << "No Cycle Detected";
      }

      

      return 0;
}