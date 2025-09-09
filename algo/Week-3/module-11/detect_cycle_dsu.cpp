#include <bits/stdc++.h>
using namespace std;

int par[100005];
int group_size[100005];

int find(int node){
    if(par[node] == -1){
        return node;
    }
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node1,int node2){
    int leader1 = find(node1);
    int leader2 = find(node2);

    if(group_size[leader1] > group_size[leader2]){
        par[leader2] = par[leader1];
        group_size[leader1] += group_size[leader2];
    }else{
        par[leader1] = par[leader2];
        group_size[leader2] += group_size[leader1];
    }
}

int main(){
    // !
    memset(par, -1, sizeof(par));
    memset(group_size, 1, sizeof(group_size));

    int n, e;
    cin >> n >> e;
    bool cycle = false;
    while(e--){
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);

        if(leaderA == leaderB){
            cycle = true;
        }

        if(cycle){
            cout << "Cycle detected.";
        }else{
            cout << "No Cycle detected.";
        }
    }
    dsu_union(1, 2);
    par[0] = 1;
    par[1] = -1;
    par[2] = 1;
    par[3] = 1;
    par[4] = 5;
    par[5] = 3;

    cout << find(5) << endl;

    return 0;
}