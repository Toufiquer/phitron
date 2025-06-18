#include<bits/stdc++.h>

using namespace std;
int main(){ 
    int N;
    cin >> N;
    cout << N << endl;
    vector<string> v(N);
    cin.ignore(); // ! ignore the enter
    for (auto i = 0; i < v.size(); i++)
    {
      // cin >> v[i]; // ! just received only first word
      getline(cin, v[i]);
    }

    // ! get index and value
    // for (auto i=0;i<v.size();i++){
    //   cout << v[i] << endl;
    // }

    // ! No index get only value
    for (auto s : v){
      cout << s << endl;
    }

        return 0;
}