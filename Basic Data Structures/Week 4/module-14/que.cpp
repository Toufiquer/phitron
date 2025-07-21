#include <bits/stdc++.h>
using namespace std;


int main()
{
    // !
    queue<int> q;

    int n;
    cin >> n;

    for (int i = 0; i < n;i++){
        int val;
        cin >> val;
        q.push(val);
    };

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
        cout << "testing 2.0" << endl;

    return 0;
}