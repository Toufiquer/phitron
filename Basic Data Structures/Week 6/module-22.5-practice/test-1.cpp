#include <bits/stdc++.h>
using namespace std;


int main(){
    // !
    int a;
    cin >> a;

    while(a--){
        int screenCount=0;
        int x, y; // 15 0
        cin >> x>> y;
        int yBackup = y;
        while(y>0){
            y = y-2;
            screenCount = screenCount+1;
            if(y<0){
                break;
            }
        }
        if(x>0 && screenCount ==0){
            screenCount = 1;
        }
        int totalSpaceNeed = x + yBackup * 4;
        int emptySpace = screenCount * 15 - yBackup * 4;
        int howMuchNeedToExtend = x - emptySpace;
        while(howMuchNeedToExtend>0){
            howMuchNeedToExtend = howMuchNeedToExtend - 15;
            screenCount = screenCount + 1;
        }
        cout << screenCount << endl;
      
       
        
    }

    return 0;
}