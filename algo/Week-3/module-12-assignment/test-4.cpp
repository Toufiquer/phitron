#include <bits/stdc++.h>
using namespace std;
int main(){
    // !
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        pair<int,int> firstH; // index, value
        firstH.first = 0;
        firstH.second = INT_MIN;
        pair<int, int> secondH;
        secondH.first = 0;
        secondH.second = INT_MIN;
        for (int i = 0; i < n;i++){
               int c;
                cin >> c;
                if (c > firstH.second)
                {   
                    if(secondH.second < firstH.second){
                        secondH.second = firstH.second;
                        secondH.first = firstH.first;
                    }
                    firstH.first = i;
                    firstH.second = c;

                }else{
                    if(c> secondH.second){
                        secondH.first = i;
                        secondH.second = c;
                    }
                } 
        }
        if(firstH.first > secondH.first){
            cout << secondH.first << " " <<firstH.first;
        }else{
            cout << firstH.first << " " <<secondH.first;
        }
        cout << endl;
    }


    return 0;
}