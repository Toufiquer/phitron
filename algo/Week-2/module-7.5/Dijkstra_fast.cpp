#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> adj_list[105];

int dis[105];

void dijkstra(int src){
      priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> q;
    q.push({src,0});
    dis[src] = 0;
    while(!q.empty()){
        auto curr = q.top();
        q.pop();

        int parent_node = curr.second;
        int parent_width = curr.first;

        for(auto child: adj_list[parent_node]){
            int child_node = child.first;
            int child_width = child.second;

            if(parent_width + child_width < dis[child_node]){
                dis[child_node] = parent_width + child_width;
                q.push({dis[child_node],child_node});
                
            }
        }

    }
}

int main(){
    // !
    int n, e;
    cin >> n >> e;

    while(e--){
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    };

    for (int i = 0; i < n;i++){
        dis[i] = INT_MAX;
    };

        dijkstra(0);

        for (int i = 0; i < n;i++){
            cout << i << " : " << dis[i] << endl;
        };

            return 0;
}