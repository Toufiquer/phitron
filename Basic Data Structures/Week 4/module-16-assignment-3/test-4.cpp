#include <bits/stdc++.h>
using namespace std;


int main(){
       int q;
    cin >> q;
    queue<string> l;

    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;

        if (x == 0) {
            string name;
            cin >> name;
            l.push(name);
        } else {
            if (l.empty()) {
                cout << "Invalid" << endl;
            } else {
                cout << l.front() << endl;
                l.pop();
            }
        }
    }


    return 0;
}