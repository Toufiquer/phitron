#include <bits/stdc++.h>
using namespace std;



int main(){
    int x;
    cin >> x;

    while(x--){
        string s;
        cin >> s;
        stack<char> st;

        for(auto i:s){ 
            if(i == '1'){
                if(!st.empty()){
                    auto t = st.top();
                    if(t == '0'){
                        st.pop();
                    }else{
                        st.push(i);
                    }
                }else{
                    st.push(i);
                }
            }else{
                st.push(i);
            }
        }
        if(!st.size()){
            cout << "YES";
        }else{
            cout << "NO";
        }
        cout << endl;
    }


    return 0;
}