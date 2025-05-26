#include<bits/stdc++.h>
using namespace std;

int* run(){
  int *a = new int[5];
  for(int i=0;i<5;i++){
    cin >> a[i];
  }
  return a;
}
int fun(){
  int b[5];
  for (int i = 0; i < 5; i++){
    cin >> b[i];
  }
  for (int i = 0; i < 5; i++){
    cout << b[i] <<" ";
  }
  return *b;
}
int main()
{ 

  int* p = run();
  for(int i=0;i<5;i++){
    cout << p[i] << " ";
  }
  delete p;
  return 0;
}