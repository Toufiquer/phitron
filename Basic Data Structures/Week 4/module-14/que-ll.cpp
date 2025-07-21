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

int main()
{
    // !
    myQuee q;

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