#include <bits/stdc++.h>
using namespace std;

int n, m;
char arr[1005][1005];
bool bool_arr[1005][1005];
int ri, rj, di, dj;

vector<pair<int, int>> moved =  {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; 
vector<pair<int, int>> path; 

void dfs(int si, int sj) {
    bool_arr[si][sj] = true;
    path.push_back({si, sj});
    for (int i = 0; i < 4; i++) {
        int newSi = si + moved[i].first;
        int newSj = sj + moved[i].second;

        if (newSi >= 0 && newSj >= 0 && newSi < n && newSj < m && bool_arr[newSi][newSj] == false && (arr[newSi][newSj] == '.' )) {
            if(arr[newSi][newSj] == 'D'){
                return;
            }
            dfs(newSi, newSj);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char x;

            cin >> x;
            arr[i][j] = x;
            if(x == 'D'){
                di = i;
                dj = j;
            }
            if(x== 'R'){
                ri = i;
                rj = j;
            }

        }
    }

    memset(bool_arr, false, sizeof(bool_arr));
 
    dfs(ri, rj);

    if (bool_arr[di][dj]) {   
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cout << arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < path.size();i++){
        cout << path[i].first << " " << path[i].second << endl;
    }


        return 0;
}