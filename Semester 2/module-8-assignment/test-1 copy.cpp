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

        cout << lenS <<" : "<< S << endl;
        cout << lenX << " : " << X << endl
             << endl;
        // cout << "outside the checking; " << endl;
        // for(int j=0;j<lenS;j++){
        //     if(S[j] == X[0]){ // ! found first leter
        //         // cout << "found first item ; " << endl;
        //         int a = 0;
        //         int b = 0;
        //         cout << S[j+a]<<"->:" << X[b] << endl;
        //         int isMatch = 0; // ! 0 -> false, 1 -> true

        //         for (int k = 0; k < lenX;k++){
        //             if(S[j+a] == X [b]){
        //                 isMatch = 1;
        //                 cout << S[j+a]<<":" << X[b] << endl;
        //             }else{
        //                 isMatch = 0;
        //             }
        //             a++;
        //             b++;
        //         }
        //     }
        // }

        cin >> S;
        cin >> X;
        // cout << S << endl << X << endl;
    }
    cout << "Code Execoute done" << endl;

    return 0;
}

