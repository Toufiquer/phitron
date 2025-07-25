#include <bits/stdc++.h>
using namespace std;


int main(){
    // !



    int a;
    cin >> a; 
    for (auto i = 0; i <= a;i++){ 
        queue<string> q;

        string str;

        getline(cin, str);

        int x = str[0]-48;
        str.erase(0, 1);
        str.erase(0, 1);
        int len = str.length();

        if(x==0){
            q.push(str);
        }else{
            // if(!q.empty()){
            //     string n;
            //     n = q.front();
            //     cout << n << endl;
            //     q.pop();
            // }else{
            //     cout << "Invaled" << endl;
            // }
        }

        cout << q.size();

        // cout << x<<":" << len << "::"<< str << endl;
    }

    cout << " v 1.0.0.1";

    return 0;
}