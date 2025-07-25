#include <bits/stdc++.h>
using namespace std;

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
    myStack st;

    st.push(3);
    st.size();
    st.top();
    st.pop();
    st.empty();
    return 0;
}