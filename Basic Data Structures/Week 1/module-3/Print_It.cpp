#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, c;
  cin >> n >> c;
  vector<int> v(n + 1);
  for(int i=0; i<n; i++)
  {
    cin >> v[i];
  }
  for(int i=0; i<n; i++)
  {
    cout << v[i] << " ";
  }

  return 0;
}