#include <bits/stdc++.h>
using namespace std;


class myStack{
    public:
        list<int> ll;
         void push(int val){
             ll.push_back(val);
         }
         void pop(){
             ll.pop_back();
         }
         int top(){
             return ll.back();
         }
         int size(){
            return ll.size();
         }
         bool empty(){
             return ll.empty();
         };
};

int main(){
    // !
    myStack st;

    st.push(10);
    st.push(20);
    st.push(30);

    if(!st.empty())
    cout << st.top() <<endl;
    if(!st.empty())
    st.pop();
    cout << st.top() <<endl;


    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

    cout << "checking 3.0 " << endl;

    return 0;
}