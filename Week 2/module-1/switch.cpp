#include<iostream>
using namespace std;
int main(){
  int x;
  cin >> x;
  switch (x)
  {
    case(0):
      cout << "Zero" << endl;
      break;
    case(1):
      cout << "One" << endl;
      break;
    case (2):
      cout << "Two" << endl;
      break;

    default:
      break;
    }
    cout << " -------------- " << endl;
    switch (x)
    {
    case(0):
      cout << "Zero" << endl;
    case(1):
      cout << "One" << endl;
    case (2):
      cout << "Two" << endl;
    default:
      break;
    }
  return 0;
}