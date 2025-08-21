#include <bits/stdc++.h>
using namespace std;

int  row,column;
char grid[100][100];
bool vis[100][100];
int lavel[100][100];
vector<pair<int, int>> moved = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool checkValid(int rowIdx, int colIdx){
    if(rowIdx<0 || rowIdx >= row || colIdx < 0 || colIdx >= column){
        return false;
    }else{
        return true;
    }
}

void bfs(int sourcrRow, int  sourceColumn){

    queue<pair<int, int>> q;
    q.push({sourcrRow,sourceColumn });
    vis[sourcrRow][sourceColumn] = true;
    lavel[sourcrRow][sourceColumn] = 0;
    while(!q.empty()){
        int currRow,currColumn;
        currRow = q.front().first;
        currColumn = q.front().second;
        cout << currRow << " " << currColumn << endl;
        q.pop();
        for (int i=0; i < 4;i++){
            int cIdx = currColumn + moved[i].first;
            int rIdx = currRow + moved[i].second;
            if (checkValid(rIdx, cIdx) && !vis[rIdx][cIdx] && grid[rIdx][cIdx] == '.')
            {
                q.push({rIdx, cIdx}); 
                lavel[rIdx][cIdx] = lavel[currRow][currColumn] + 1;
                vis[rIdx][cIdx] = true;
            }
        }
    }
};

int main(){
    // !
    cin >> row >> column;
    for (int i = 0; i < row;i++){
        for (int j = 0; j < column;j++){
            cin >> grid[i][j];
        }
    }
    for (int i = 0; i < row;i++){
        for (int j = 0; j < column;j++){
         cout <<   grid[i][j];
        }
        cout << endl;
    }

    int sourcrRow,sourceColumn;
    cin >>   sourcrRow >> sourceColumn;
    
    int distinationRow,distinationColumn;
    cin >>  distinationRow >> distinationColumn;

    memset(vis, false, sizeof(vis));
    memset(lavel, -1, sizeof(lavel));
    bfs(sourcrRow,sourceColumn);
    cout << endl << lavel[distinationRow][distinationColumn];
    return 0;
}