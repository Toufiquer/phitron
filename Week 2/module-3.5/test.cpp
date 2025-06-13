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

  Student *stu1 = getStudent();
  Student *stu2;
 
    stu2->gpa = stu1->gpa;
    stu2->roll = stu1->roll;
    stu2->section = stu1->section;

  delete stu1;

  //   cout << (*stu1).section << " " << stu1->gpa << " "  << stu1->roll <<  endl;
  cout << (*stu2).section << " " << stu2->gpa << " "  << stu2->roll <<  endl;

  return 0;
}