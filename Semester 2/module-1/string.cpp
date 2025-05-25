#include<iostream>

using namespace std;

int main() {
  char s[100000];
  // cin >> s;
  // cin.ignore(); // if it has number before it and ignore enter
  cin.getline(s, 100000);
  cout << s << endl;

  // ! string
  string str;
  cin >> str;
  cout << str << endl;

  // ! char arr
  // char str[1000];
  // cin.getline(str, 1000);
  // cout << str << endl;
  return 0;
}