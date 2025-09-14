#include <bits/stdc++.h>
using namespace std;

bool isReach(int n) {
    while (n > 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else if (n >= 3) {
            n -= 3;
        } else {
            break;
        }
    }
    return n == 1;
}


int main(){
  int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        if (isReach(N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}