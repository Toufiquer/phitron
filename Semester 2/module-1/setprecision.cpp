#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  double d = 3.233243;
  cout << fixed << setprecision(3) << d << endl;

  // ! if else
  if(false){
    cout << "Hello World" << endl;
  }else{
    cout << "Hello else" << endl;
  }

  // ! ternary operator
  true ? cout << "Positive" : cout << "Negative";

  return 0;
} 