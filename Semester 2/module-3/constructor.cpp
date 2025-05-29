#include<bits/stdc++.h>
using namespace std;

class Students{
    public:
    char name[100];
    int roll;
    char section;

    // ! declare constructor 1
    // Students(int roll, char section, char* name){
    //   (*this).roll = roll;
    //   (*this).section = section;
    //   strcpy((*this).name,name);
    // }
    // ! declare constructor 2
    // Students(int r, char s, char* n){
    //     roll = r;
    //     section = s;
    //     strcpy(name,n);
    // }
    // ! declare constructor 3
    Students(int roll, char section, char* name){
        this->roll = roll;
        this->section = section;
        strcpy(this->name,name);
    }
};

int main(){
  Students student1(10,'A',"Sakib");
  Students student2(20,'B',"Shakil");

  cout << student1.name << "  " << student1.roll<< "  " << student1.section << endl;
  cout << student2.name << "  " << student2.roll<< "  " << student2.section << endl;


  return 0;
}