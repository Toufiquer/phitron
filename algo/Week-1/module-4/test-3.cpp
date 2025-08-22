#include <bits/stdc++.h>
using namespace std;

int  row,column;
char grid[1010][1010];
bool vis[1010][1010];
int lavel[1010][1010];
vector<pair<int, int>> moved = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool checkValid(int rowIdx, int colIdx){
    if(rowIdx<0 || rowIdx >= row || colIdx < 0 || colIdx >= column){
        return false;
    }else{
        return true;
    }
}

void bfs(int sourceRow, int  sourceColumn){

    queue<pair<int, int>> q;
    q.push({sourceRow,sourceColumn });
    vis[sourceRow][sourceColumn] = true;
    lavel[sourceRow][sourceColumn] = 0;
    while(!q.empty()){
        int currColumn, currRow;
        currRow = q.front().first;
        currColumn = q.front().second;
        q.pop();
        for (int i=0; i < 4;i++){
            int cIdx = currColumn + moved[i].first;
            int rIdx = currRow + moved[i].second;
            if (checkValid(rIdx, cIdx) && !vis[rIdx][cIdx] && (grid[rIdx][cIdx] == '.' || grid[rIdx][cIdx] == 'A'|| grid[rIdx][cIdx] == 'B'))
            {
                q.push({rIdx, cIdx});
                bfs(rIdx, cIdx);
                lavel[rIdx][cIdx] = lavel[currRow][currColumn] + 1;
            }
        }
    }
};

int main(){
    cin >> row >> column;
    int sourceRow,sourceColumn;
    int distinationRow,distinationColumn;
    for (int i = 0; i < row;i++){
        for (int j = 0; j < column;j++){
            char x;
            cin >> x;
            grid[i][j] = x;
            if(x == 'A'){
                sourceRow = i;
                sourceColumn = j;
            }
            if(x == 'B'){
                distinationRow = i;
                distinationColumn = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    memset(lavel, -1, sizeof(lavel));
    bfs(sourceRow,sourceColumn);

    if(lavel[distinationRow][distinationColumn] == -1){
        cout << "NO";
    }else{
        cout << "YES";
    }
    return 0;
}