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

  Student sakib("Sakib Ahmend", 23);
  Student rakib("Rakib Ahmend", 23);
  sakib.print();
  rakib.print();

  return 0;
}