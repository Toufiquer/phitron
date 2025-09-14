#include <bits/stdc++.h>
using namespace std;

int knapsack(int N, int W, vector<int>& w, vector<int>& v) {
    vector<int> dp(W + 1, 0);
    for (int i = 0; i < N; i++) {
        for (int j = W; j >= w[i]; j--) {
            dp[j] = max(dp[j], v[i] + dp[j - w[i]]);
        }
    }
    return dp[W];
}


int main(){
    int T;
    cin >> T;
    while (T--) {
        int N, W;
        cin >> N >> W;
        vector<int> w(N);
        vector<int> v(N);
        for (int i = 0; i < N; i++) {
            cin >> w[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> v[i];
        }
        cout << knapsack(N, W, w, v) << endl;
    }
    return 0;
}