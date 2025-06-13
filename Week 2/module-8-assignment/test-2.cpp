#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    getline(cin,S);
    stringstream ss(S);
    string w;
    int a = 0; // ! 0 ->> false, 1 ->> true
    while(ss >> w){
        if(a==1){
            break;
        } 
      string fixedName = "Jessica";
      int lenChecking = w.length();
      for (int i = 0; i < lenChecking;i++){
        if(fixedName[i] == w[i] && fixedName.length() == lenChecking){
            a = 1;
        }else{
            a =0;
            break;
        }
      } 
    }

    if(a==1){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}