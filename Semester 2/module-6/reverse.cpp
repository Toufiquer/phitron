#include<bits/stdc++.h>
using namespace std;

int main(){

  // string str;
  // getline(cin,str);

  // ! reverse the string
  // int len = str.length();
  // string ans;
  // for (int i = len - 1; i >= 0; i--)
  // {
  //   ans += str[i];
  // }
  // cout << ans <<endl;


  // ! reverse the array of int
  // int n;
  // cin >> n;
  // int a[n];
  // for (int i = 0; i < n; i++)
  // {
    //   cin >> a[i];
    // }
    // reverse(a, a+n);
    // for (int i = 0; i < n; i++)
    // {
      //   cout << a[i];
      // }


      // ! reverse the array of string
      string str;
      getline(cin,str);
      reverse(str.begin(), str.end());
      cout << str << endl;

      return 0;
}