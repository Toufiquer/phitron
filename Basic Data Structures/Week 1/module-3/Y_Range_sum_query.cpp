#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, c;
  cin >> n >> c;
  vector<long long int> v(n);
  vector<long long int> prefix_v(n);
  for(int i=0; i<n; i++)
  {
    cin >> v[i];
  }
  prefix_v[0]=v[0];
  for(int i=1; i<n; i++)
  {
      prefix_v[i]=prefix_v[i-1]+v[i];
    
  }
  // for (int m = 0; m < n;m++){
  //   cout << prefix_v[m] << " ";
  // }
    while (c--)
    {
      long long int a, b;
      cin >> a >> b;
      long long int sum = 0;
      if(a==1){
        sum = prefix_v[b - 1];
      } else{
        sum = prefix_v[b - 1] - prefix_v[a - 2];
      }

      cout << sum << endl;
    }

    return 0;
}