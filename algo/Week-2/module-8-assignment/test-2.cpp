#include <bits/stdc++.h>
using namespace std;

int n, m;
char arr[1005][1005];
bool bool_arr[1005][1005];

vector<pair<int, int>> moved = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int counterArea = 0;
int minArea = INT_MAX;
void dfs(int si, int sj) {
    bool_arr[si][sj] = true;
    counterArea++;
    for (int i = 0; i < 4; i++) {
        int newSi = si + moved[i].first;
        int newSj = sj + moved[i].second;

        if (newSi >= 0 && newSj >= 0 && newSi < n && newSj < m && bool_arr[newSi][newSj] == false && arr[newSi][newSj] == '.') {
            dfs(newSi, newSj);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char x;
            cin >> x ;
            arr[i][j] = x;
        }
    }

    memset(bool_arr, false, sizeof(bool_arr));

   for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(arr[i][j] == '.' && bool_arr[i][j] == false){
                counterArea = 0;
                dfs(i, j);
                if(counterArea<minArea){
                    minArea = counterArea;
                }
            }
        }
    }
    if(minArea == INT_MAX){
        cout << -1;
    }else{
        cout << minArea << endl;
    }


        return 0;
}