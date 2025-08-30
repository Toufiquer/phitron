#include <bits/stdc++.h>
using namespace std;
 
vector<pair<int, int>> movement =   {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
vector<pair<int, int>> movementPath;
char arr[1005][1005];
bool isValid(int row, int col, int n, int m) {
    return row >= 0 && row < n && col >= 0 && col < m;
}
 
int minKnightMoves(int n, int m, int startRow, int startCol, int queenRow, int queenCol) { 
    if (startRow == queenRow && startCol == queenCol) {
        return 0;
    }
 
    queue<tuple<int, int, int, vector<pair<int,int>>>> q;
 
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));  
    vector<vector<pair<int, int>>> prev(n, vector<pair<int,int>>(m, {-1, -1}));
 
    q.push({startRow, startCol, 0, {{startRow, startCol}}});  
    dist[startRow][startCol] = 0;
 
    while (!q.empty()) { 
        int currentRow = get<0>(q.front());
        int currentCol = get<1>(q.front());
        int currentDist = get<2>(q.front());
        vector<pair<int, int>> currentPath = get<3>(q.front());
        q.pop();
 
        if (currentRow == queenRow && currentCol == queenCol) {
            movementPath = currentPath;
            return currentDist;
        }
 
        for (auto move : movement) {
            int nextRow = currentRow + move.first;
            int nextCol = currentCol + move.second;
 
            if (isValid(nextRow, nextCol, n, m) && (arr[nextRow][nextCol] == '.' ||arr[nextRow][nextCol] == 'R'|| arr[nextRow][nextCol] == 'D')) {
                if (currentDist + 1 < dist[nextRow][nextCol]) { 
                    dist[nextRow][nextCol] = currentDist + 1;
                    vector<pair<int, int>> newPath = currentPath;
                    newPath.push_back({nextRow, nextCol});
                    q.push({nextRow, nextCol, currentDist + 1, newPath});
                }
            }
        }
    }
    return -1;
}

bool isPathViewed(int si,int sj){
    bool result = false;
       for (int i = 0; i < movementPath.size(); i++)
        {
            if(movementPath[i].first == si && movementPath[i].second ==sj){
                result = true;
            }
        }
 
    return result;
}

int main() {
    int n, m,si,sj,di,dj;
    cin >> n >> m;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            char x;
            cin >> x;
            arr[i][j] = x;
            if(x=='R'){
                si = i;
                sj = j;
            }
            if(x == 'D'){
                di = i;
                dj = j;
            }
        }
    }
 
        int result = minKnightMoves(n, m, si,sj,di,dj);


    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(arr[i][j]=='.' && isPathViewed(i,j) ){
                cout << "X";
            }else{
                cout << arr[i][j];
            }
        }
        cout << endl;
    }

    
 
        return 0;
}