#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1000];
bool vis[1000];
int lavel[1000];
int parent[1000];


void bfs(int src){
  queue<int> q;
  q.push(src);
  vis[src] = true;
  lavel[src] = 0;
  while (!q.empty())
  {
    int curr = q.front();
    q.pop();
    
    // cout << curr << " ";
    
    for (auto child : adj_list[curr])
    {
      if (vis[child] == false)
      {
        parent[child] = curr;
        lavel[child] = lavel[curr] + 1;
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
    
  memset(vis, false, sizeof(vis));
  memset(lavel, -1, sizeof(lavel));
  memset(parent, -1, sizeof(parent));
    bfs(0);
    // for (int i = 0; i < n;i++){
    //     cout << i <<" : "<< parent[i] << endl;
    // }
    int src, distination;
    cin >> src >> distination;

    vector<int> path;
    int currNode = distination;
    while (currNode != -1){
      // cout << currNode << " ";
      path.push_back(currNode);
      currNode = parent[currNode];
    }

    reverse(path.begin(), path.end());
    for(auto i: path){
      cout << i << " ";
    }
    return 0;
}