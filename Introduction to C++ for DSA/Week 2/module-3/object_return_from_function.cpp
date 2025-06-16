#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
    int roll;
    double  gpa;
    char section;
};


Student getStudent(){
  Student a;
  a.roll = 10;
  a.gpa = 3.50;
  a.section = 'A';
  return a;
};

int main(){

  Student sakib = getStudent();
  cout << sakib.section << " " << sakib.gpa << " "  << sakib.roll <<  endl;

  return 0;
}