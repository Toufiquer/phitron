#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin >> N;
    vector<long long int> A(N);
    vector<long long int> B(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){
        if(i>0){
            B[i] = A[i] +B[i-1];
        }else{
            B[i] = A[i];
        }
    }

    reverse(B.begin(), B.end());

   for(auto i:B){
    cout << i << " ";
   }
    return 0;
}