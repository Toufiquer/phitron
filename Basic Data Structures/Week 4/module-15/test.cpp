#include <bits/stdc++.h>
using namespace std;


int main(){
    // !
    string s;
    cin >> s;


    string result;

    int counter = 0;
    char rem;
    while(counter < s.size()){
        if(s[counter] != result[result.size()-1]){
            result.push_back(s[counter]);
            rem = '\0';
        }else{
            rem = result[result.size() - 1];
            result.pop_back();
        }
        counter++;
    } 

    cout << "result : " << s << endl;

    return 0;
}