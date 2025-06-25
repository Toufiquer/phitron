#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin >> N;
    vector<long long int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    int r = 0;
    sort(A.begin(), A.end());

    for(int i = 0; i < N; i++){
        if(A[i] == A[i+1] || A[i] == A[i-1]){
            r = 1;
            break;
        }
    } 
    if(r==0){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
    return 0;
}