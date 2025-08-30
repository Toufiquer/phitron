#include <bits/stdc++.h>
using namespace std; 
 
vector<pair<int, int>> movement = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};
 
bool isValid(int row, int col, int n, int m) {
    return row >= 0 && row < n && col >= 0 && col < m;
}
 
int minKnightMoves(int n, int m, int startRow, int startCol, int queenRow, int queenCol) { 
    if (startRow == queenRow && startCol == queenCol) {
        return 0;
    }
 
    queue<tuple<int, int, int>> q;
 
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));  
 
    q.push({startRow, startCol, 0});  
    dist[startRow][startCol] = 0;

 
    while (!q.empty()) { 
        int currentRow = get<0>(q.front());
        int currentCol = get<1>(q.front());
        int currentDist = get<2>(q.front());
        q.pop();
 
        if (currentRow == queenRow && currentCol == queenCol) {
            return currentDist;
        }
 
        for (auto move : movement) {
            int nextRow = currentRow + move.first;
            int nextCol = currentCol + move.second;
 
            if (isValid(nextRow, nextCol, n, m)) { 
                if (currentDist + 1 < dist[nextRow][nextCol]) { 
                    dist[nextRow][nextCol] = currentDist + 1;
                    q.push({nextRow, nextCol, currentDist + 1});  
                }
            }
        }
    }
 
    return -1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k1, k2, q1, q2;
        cin >> n >> m >> k1 >> k2 >> q1 >> q2;

        int result = minKnightMoves(n, m, k1, k2, q1, q2);
        cout << result << endl;
    }

    return 0;
}