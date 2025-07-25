#include <bits/stdc++.h>
using namespace std;
int main(){
    // !

    queue<int> q;
    stack<int> s;
    bool f;
    f = false;
    int a, b;
    cin >> a>> b;

    for (auto i = 0; i < a;i++){
        int x;
        cin >> x;
        q.push(x);
    }
    
    for (auto j = 0; j < b;j++){
        int x;
        cin >> x;
        s.push(x);
    }

if(a==b){
       for (auto i = 0; i < a;i++){
        int x,y;
        x = q.front();
        y = s.top();
        if(x == y){
            f = true;
        }else{
            f = false;
            break;
        }
        s.pop();
        q.pop();
    }
}

    // for (auto i = 0; i < a;i++){
    //     int x;
    //     x = q.front();
    //     cout << x << " ";
    //     q.pop();
    // }
    // cout << endl;
 
    // for (auto j = 0; j < b;j++){
    //     int x;
    //     x = s.top();
    //     cout << x << " ";
    //     s.pop();
    // }
    // cout << endl;
    //     cout << a << " " << b << endl;

    if(f){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}