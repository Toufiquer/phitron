#include<bits/stdc++.h>
using namespace std;
int main(){
    // ! Dynamic variable

    char N;
    cin >> N;
    if((int)N >= (int)'a' && (int)N <= (int)'z'){
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }else if((int)N >= (int)'A' && (int)N <= (int)'Z'){
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }else{
        cout << "IS DIGIT" << endl;
    }

    return 0;
} 