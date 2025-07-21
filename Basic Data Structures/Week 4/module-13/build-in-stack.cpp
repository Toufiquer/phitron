#include <bits/stdc++.h>
using namespace std;




int main(){
    // !
    stack<int> st;

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

    cout << "checking 5.0 " << endl;

    return 0;
}