#include<bits/stdc++.h>
using namespace std;


void checkSum(){
    int result = 0; // 0=false; 1=true
    int N; // length of array
    cin >> N;
    
    int S; // sum
    cin >> S;
    
    int A[N];
    for (int i = 0; i < N;i++){
        cin >> A[i];
    }
    
    for (int x = 0; x < N; x++){
        for (int y = x+1; y < N; y++){
            for (int z = x + 2; z < N; z++)
            {
                if(x<y&& y<z){
                    if (x<N && y<N && z<N && A[x] + A[y] + A[z] == S){
                        result = 1;
                    }
                }
            }
        }
    }
    
    if (result == 1)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
int main(){
    int T;
    cin >> T;
    for (int i = 0; i < T;i++){
        checkSum();
    }
    return 0;
}