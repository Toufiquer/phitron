#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;

    cin.ignore();
    for(int i=0;i<T;i++){
        string S, X;
        cin >> S;
        cin >> X;
        int lenS = S.length();
        int lenX = X.length();

        // ! loop throw X check the first letter with first letter of X;
        for (int j = 0; j < lenS;j++){
            if(S[j] == X[0]){
                cout << "match:"<< j <<  endl;
            }
        }

            cout << S << endl;
    }
    cout << "Code Execoute done" << endl;

    return 0;
}

