#include <bits/stdc++.h>
using namespace std;

int memo[31];


int tetranacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 1;
    if (n == 3) return 2;
    
    if (memo[n] != -1) {
        return memo[n];
    }
    
    int result = tetranacci(n-1) + tetranacci(n-2) + tetranacci(n-3) + tetranacci(n-4);
    memo[n] = result;
    return result;
}

int main(){
    int n;
    cin >> n;
    memset(memo, -1, sizeof(memo));
    cout << tetranacci(n) << endl;
    return 0;
}