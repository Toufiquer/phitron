#include<bits/stdc++.h>

using namespace std;
int main(){
    int N;
    cin >> N;

    for (int i = 0; i < N;i++){
        string S, T,Z;
        cin >> S >> T;
        int min_size_of_both_string = S.size() < T.size() ? S.size() : T.size();
        for (int j = 0; j < min_size_of_both_string;j++){
            if(S[j]!= '\0'&& T[j]!= '\0' ){
                Z = Z + S[j] + T[j];
            }else if(S[j]!= '\0'){
                Z = Z + S[j];
                for (int k = j; k < S.size();k++){
                    Z = Z + S[k];
                }
            }else if(T[j]!='\0'){
                Z = Z + T[j];
                for (int k = j; k < T.size();k++){
                    Z = Z + T[k];
                }
            } 
        }
            cout << Z;
            if(N!=i+1){
                cout << endl;
            }
    }
        return 0;
}