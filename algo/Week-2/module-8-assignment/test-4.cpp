#include <bits/stdc++.h>
using namespace std; 

using namespace std;

int n, m;
char arr[1005][1005];

vector<pair<int, int>> moved = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; 

bool isValid(int row, int col) {
    return row >= 0 && row < n && col >= 0 && col < m;
}


int main() {
    int ri, rj, di, dj;
    cin >> n >> m;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'D') {
                di = i;
                dj = j;
            }
            if (arr[i][j] == 'R') {
                ri = i;
                rj = j;
            }
        }
    }

    queue<pair<int, int>> q;
    q.push({ri, rj});

    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    dist[ri][rj] = 0;

    vector<pair<int,int>> path;

    while (!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();

        int currentRow = current.first;
        int currentCol = current.second;

        if (arr[currentRow][currentCol] == 'D') continue;

        for (const auto& move : moved) {
            int nextRow = currentRow + move.first;
            int nextCol = currentCol + move.second;

            if (isValid(nextRow, nextCol) && (arr[nextRow][nextCol] == '.' || arr[nextRow][nextCol] == 'D') ) {

                if (dist[currentRow][currentCol] + 1 < dist[nextRow][nextCol]) {
                    dist[nextRow][nextCol] = dist[currentRow][currentCol] + 1;
                    q.push({nextRow, nextCol});
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (dist[i][j] != INT_MAX && arr[i][j] != 'D' && arr[i][j] != 'R') {
                arr[i][j] = 'X';
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}