#include <bits/stdc++.h>
using namespace std;

 
int main(){
    // !

    set<int> s;
    int n;
    cin >> n;
    while(n--){
      int val;
      cin >> val;
      s.insert(val);
    }

    for (auto it = s.begin(); it != s.end();it++){
      cout << *it << endl;
    }

    if(s.count(4)){
      cout << "Found ";
    }else{
      cout << "Not Found";
    }
      cout << " v 1.0.0.1";

    return 0;
}