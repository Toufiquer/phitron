#include <bits/stdc++.h>
using namespace std;


int main(){
    // !



    int a;
    cin >> a; 
    for (auto i = 0; i < a;i++){
            stack<int> q;
            string str;
            cin >> str;
            int len = str.length();
            for (int j = 0; j < len;j++){
                    char x,y;
                    x = str[j];
                    y = 2;
                    if(!q.empty()){
                        y = q.top();
                    }
                    if(x!=0){
                        if(y == 2){
                            q.push(x);
                        }else{
                            q.pop();
                        }
                    }else{
                        q.push(x);
                    }
            }
            if(q.empty()){
                cout << "YES";
            }else{
                cout << "NO";
            }
            cout << endl;
    }


    return 0;
}