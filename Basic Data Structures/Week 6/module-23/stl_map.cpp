#include <bits/stdc++.h>
using namespace std;

 
int main(){
    // !

    map<string, int> mp;
    mp["tamim"] = 2;
    mp["shamim"] = 2;
    mp["famim"] = 0;
    

    // cout << mp["tamim"] << " " << mp["namim"] << " " << mp["famim"] << endl;

    for (auto it = mp.begin(); it != mp.end();it++){
      cout << it->first << " " << it->second << endl;
    }
    if(mp.count("namim")){
      cout << "False";
    }else{
      cout << "TRUE";
    }
      cout << " v 1.0.0.1";

    return 0;
}