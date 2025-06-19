#include <bits/stdc++.h>;
using namespace std;
int main(){
    // !

    int N;
    cin >> N;

    vector<int> v(N);

    for(int i = 0; i < N; i++){
        cin >> v[i];
    }

    reverse(v.begin(), v.end());

    for(auto val : v){
        cout << val << " ";
    }


    return 0;
}