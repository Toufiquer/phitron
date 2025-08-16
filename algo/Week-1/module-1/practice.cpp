#include <bits/stdc++.h>
using namespace std;
int main(){
    // !
    int n, e;
    cin >> n >> e;
    int adj_mat [n][e];
    memset(adj_mat, 0, sizeof(adj_mat));
    for (int k = 1; k <= e;k++)
    {
        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1; 
        adj_mat[b][a] = 1; 
    }
    
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= e;j++){
            if(i==j){
                adj_mat[i][j] = 1;
            }
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}