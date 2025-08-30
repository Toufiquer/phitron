#include <bits/stdc++.h>
using namespace std;

int n, m;
char arr[1005][1005];
bool bool_arr[1005][1005];

vector<pair<int, int>> moved = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

void dfs(int si, int sj) {
    bool_arr[si][sj] = true;
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
            cin >> arr[i][j];
        }
    }

    memset(bool_arr, false, sizeof(bool_arr));
    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
 
    dfs(si, sj);

    if (bool_arr[di][dj]) {   
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}