#include <bits/stdc++.h>
using namespace std;

vector<int> arr[1010];

int main(){ 
    int n, e;
    cin >> n >> e;
    while (e--){
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    };

    int q;
    cin >> q;
    while(q--){
        int a;
        cin >> a;
        vector<int> currArr;
        if(arr[a].size() ==0){
            cout << -1;
        }else{

            for (auto x: arr[a]){
                currArr.push_back(x);
            }
            sort(currArr.begin(), currArr.end(), std::greater<int>());
            for(auto y: currArr){
                cout << y << " ";
            }
        }
        cout << endl;
    }
 
    return 0;
}