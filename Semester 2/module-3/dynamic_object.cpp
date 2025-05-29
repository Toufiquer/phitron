#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
    int roll;
    double  gpa;
    char section;
    Student(int roll, double gpa, char section){
      this->roll = roll;
      this->gpa = gpa;
      this->section = section;
    }
};


Student* getStudent(){
  Student* a = new Student(10, 3.5, 'A');
  return a;
};

int main(){

  Student *sakib = getStudent();
  cout << (*sakib).section << " " << sakib->gpa << " "  << sakib->roll <<  endl;

  return 0;
}