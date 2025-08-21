#include <bits/stdc++.h>
using namespace std;

int  row,column;
char grid[100][100];
bool vis[100][100];
vector<pair<int, int>> moved = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool checkValid(int rowIdx, int colIdx){
    if(rowIdx<0 || rowIdx >= row || colIdx < 0 || colIdx >= column){
        return false;
    }else{
        return true;
    }
}

void dfs(int sourceI, int sourceJ){
   
    cout << sourceI<<" " << sourceJ << endl;
    vis[sourceI][sourceJ] = true;

    for (int i = 0; i < 4;i++){
        int currI, currJ;
        currI = sourceI + moved[i].first;
        currJ = sourceJ + moved[i].second;
        if(!vis[currI][currJ] && checkValid(currI, currJ)){
            dfs(currI, currJ);
        }
        cout << currI<<" " << currJ << endl;
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



    memset(vis, false, sizeof(vis)); 
    dfs(row,column);
    return 0;
}