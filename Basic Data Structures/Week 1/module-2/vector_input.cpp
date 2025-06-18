#include<bits/stdc++.h>

using namespace std;
int main(){ 
    int N;
    cin >> N;
    cout << N << endl;
    vector<int> v(N);

    for (auto i=0;i<v.size();i++){
        cin >> v[i];
    }
    for (auto i=0;i<v.size();i++){
        cout << v[i];
    }

        return 0;
}