#include <bits/stdc++.h>
using namespace std;

    class myQuee{
    public:
        list<int> ll;
    
    void push(int val){
        ll.push_back(val);
    };

    void pop(){
        ll.pop_front();
    };

    int front(){
        return ll.front();
    };

    int back(){
        return ll.back();
    }

    int size(){
        return ll.size();
    }

    bool empty(){
        return ll.empty();
    }
};

    class myStack {
public:
    std::list<int> ll;

    void push(int val) {
        ll.push_back(val);
    }

    void pop() {
        if (!empty()) { 
            ll.pop_back(); 
        }
    }

    int top() {
       
        if (empty()) {
            return -1; 
        }
        return ll.back(); 
    }
    int size() {
        return ll.size();
    }

    bool empty() {
        return ll.empty();
    }
};


int main(){
    // !


    myQuee q;
    myStack s;
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

    if(f){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}