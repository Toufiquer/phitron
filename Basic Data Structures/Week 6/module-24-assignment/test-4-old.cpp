#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> s;
    while(n--){
        int val;
        cin >> val;
        s.insert(val);
    }

    // for (auto it = s.begin(); it != s.end(); it++){
    //     cout << *it << endl;
    // }

        int q;
        cin >> q;

        while(q--){
            int v;
            cin >> v;
            if( v == 0){
                int curr;
                cin >> curr;
                s.insert(curr); // 
                if(s.empty()){ // 
                    cout << "Empty" << endl;
                }else{
                    cout << *s.begin() << endl;
                }
            }
            else if(v == 1){
                 if(s.empty()){
                    cout << "Empty" << endl;
                }else{
                    cout << *s.begin() << endl;
                }
            }
            else if(v==2){
                s.erase(s.begin());
                 if(s.empty()){
                    cout << "Empty" << endl;
                }else{
                    cout << *s.begin() << endl;
                }
            }
            
        }

    return 0;
}