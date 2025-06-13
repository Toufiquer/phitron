#include<bits/stdc++.h>

using namespace std;

int *p;

int fun(){
  int *a = new int;
  *a = 10;
  p = a;
  return 0;
}
int main(){
  // ! Dynamic variable
  fun();
  cout<<p;
   
    return 0;
}