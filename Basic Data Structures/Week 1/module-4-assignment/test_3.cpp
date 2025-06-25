#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;
    cin >> N;
    vector< int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    int r = 0;

    for(int i = 0; i < N; i++){
        if(i == N-1){
            if(A[i-1] <= A[i]){
                r = 1;
            }else{
                r = 0;
            }
            break;
        }else if(A[i] <= A[i+1]){
            r = 1;
        }else{
            r = 0;
            break;
        }
    } 
    if(r==0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}

int main(){
    int T;
    cin >> T;

    while(T--){
        solve();
    }
    return 0;
}