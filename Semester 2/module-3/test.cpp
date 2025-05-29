#include<bits/stdc++.h>
using namespace std;

class Students{
    public:
    char name[100];
    int roll;
    char section;
};
int main(){
    // !  declearation of object 1
    // Students student1 = {
    //     "Sakib",
    //     10,
    //     'A'};

    // !  declearation of object 2
    // Students student1;
    // student1.roll = 20;
    // student1.section = 'B';
    // strcpy(student1.name,"Hass");
    
    // ! input from text;
    Students student1;
    cin.getline(student1.name,100); 
    cin >> student1.roll;
    cin >> student1.section;

    cin.ignore();
    Students student2;
    cin.getline(student2.name,100); 
    cin >> student2.roll;
    cin >> student2.section;

    // ! output
    cout << student1.name << "  " << student1.roll<< "  " << student1.section << endl;
    cout << student2.name << "  " << student2.roll<< "  " << student2.section << endl;

    return 0;
}