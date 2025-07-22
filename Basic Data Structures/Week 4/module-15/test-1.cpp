#include <bits/stdc++.h>
using namespace std;
int main(){
    // !
    string str;
    cin >> str;

    cout << str << endl;

    int len = str.length();

    bool flag = false;

    for (int i = 0; i < len;i++){
        cout << str[i] << endl;
        if(str[i] == '{'){
           if( str[i + 1] == '}'){
               flag = true;
           }else{
               flag = false;
               break;
           }
        }
        if(str[i] == '['){
           if( str[i + 1] == ']'){
               flag = true;
           }else{
               flag = false;
               break;
           }
        }
        if(str[i] == '('){
           if( str[i + 1] == ')'){
               flag = true;
           }else{
               flag = false;
               break;
           }
        }
    }

        cout << len << endl;
        if(flag){
            cout << "True" << endl;
        }else{
            cout << "False" << endl;
        }

        return 0;
}