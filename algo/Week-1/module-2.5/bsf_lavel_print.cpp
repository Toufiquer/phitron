#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1000];
bool vis[1000];
int lavel[1000]={-1};

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    lavel[src] = 0;
    while(!q.empty()){
        int curr = q.front();
        q.pop();

        // cout << curr << " ";

        for (auto child: adj_list[curr]){
            if(vis[child] == false){
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
    bfs(0);
    for (int i = 0; i < n;i++){
        cout <<i <<" : "<< lavel[i] << endl;
    }
    int x, y;
    cin >> x >> y;
    cout << lavel[y];
    return 0;
}