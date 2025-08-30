#include <bits/stdc++.h>
using namespace std;

using namespace std;

int n, m;
char arr[1005][1005];

vector<pair<int, int>> moved = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; // Right, Left, Up, Down

bool isValid(int row, int col) {
    return row >= 0 && row < n && col >= 0 && col < m;
}


int main() {
    int ri, rj, di, dj;
    cin >> n >> m;
    cin.ignore(); // Consume newline

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

    vector<vector<int>> dist(n, vector<int>(m, INT_MAX)); // Distance from start
    dist[ri][rj] = 0;

    while (!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();

        int currentRow = current.first;
        int currentCol = current.second;

        if (arr[currentRow][currentCol] == 'D') continue; //No need to mark the exit

        // Explore adjacent cells in the specified order (Right, Left, Up, Down)
        for (const auto& move : moved) {
            int nextRow = currentRow + move.first;
            int nextCol = currentCol + move.second;

            if (isValid(nextRow, nextCol) && (arr[nextRow][nextCol] == '.' || arr[nextRow][nextCol] == 'D') ) {

                if (dist[currentRow][currentCol] + 1 < dist[nextRow][nextCol]) { //Check shortest distance
                    dist[nextRow][nextCol] = dist[currentRow][currentCol] + 1;
                    q.push({nextRow, nextCol});
                    if(arr[nextRow][nextCol] != 'D') // Don't overwrite the exit if it's reached
                        arr[nextRow][nextCol] = 'X';
                }
            }
        }
    }

    // Print the final maze
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}