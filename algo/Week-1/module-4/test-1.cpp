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
    };

    int q;
    cin >> q;
    while(q--){
        int a, b;
        cin >> a >> b;
        bool f = false;
           if(a == b){
               f = true;
           }else{
               for(auto x: arr[a]){
                   if(x == b){
                       f = true;
                    }
                }
                
            }
        if(f){
            cout << "YES";
        }else{
            cout << "NO";
        }
        cout << endl;
    }
 
    return 0;
}