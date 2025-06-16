#include<bits/stdc++.h>
using namespace std;


class Student {
  public:
    string name;
    int roll;
    Student(string name, int roll) {
      this->name = name;
      this->roll = roll;
    }
    void print(){
      cout << name << " " << roll << endl;
    }
};
int main()
{

  Student* student1 = new Student("Sakib Ahmend", 23);
  Student* student2 = new Student("Rakib Ahmend", 25);
  // student1 = student2; // ! do not use this copy =
  *student1 = *student2;
  
  // student1->name = student2->name;
  // student1->roll = student2->roll;
  delete student1;
  
  // cout << student1->name << " " << student1->roll << endl;
  cout <<  student2->name << " " << student2->roll << endl;


  return 0;
}