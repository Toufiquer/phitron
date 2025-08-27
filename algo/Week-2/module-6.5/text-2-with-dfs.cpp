#include <bits/stdc++.h>
using namespace std;

bool vis[105];
vector<int> adj_list[105];
int parent[105];
bool cycle;

void dfs(int src){
  vis[src] = true;
  for(int child: adj_list[src]){
    if(vis[child] && parent[src]!= child){
      cycle = true;
    }
    if(!vis[child]){
      parent[child] = src;
      dfs(child);
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