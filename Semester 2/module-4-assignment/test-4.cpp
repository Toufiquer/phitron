#include<bits/stdc++.h>
using namespace std;

class Students{
    public:
    int ID;
    string name;
    char section;
    int totalMarks;
    Students(int ID,string name,char section,int totalMarks){
        this->ID = ID;
        this->name = name;
        this->section = section;
        this->totalMarks = totalMarks;
    }

};

Students scanStudentData(){
    int ID;
    string name;
    char section;
    int totalMarks;

    cin >> ID;
    cin >> name;
    cin >> section;
    cin >> totalMarks;

return Students(ID,name,section,totalMarks);
}
Students getHighMarksStudent(Students student1,Students student2){
    if(student1.totalMarks == student2.totalMarks){
        if(student1.ID < student2.ID){
            return student1;
        }else{
            return student2; 
        }
    }
    if(student1.totalMarks > student2.totalMarks){
        return student1;
    }else{
        return student2; 
    }
}

int main(){

    int T;
    cin >> T;
    cin.ignore();
    for (int i = 0; i < T;i++){

        Students student1 =   scanStudentData();
        Students student2 =   scanStudentData();
        Students student3 =   scanStudentData();
        
        Students studentHighM = getHighMarksStudent(student1,student2);
        Students studentHighMarks = getHighMarksStudent(studentHighM,student3);
        
        cout << studentHighMarks.ID << " " << studentHighMarks.name << "\t" << studentHighMarks.section<< "\t" << studentHighMarks.totalMarks<< endl;
     
    }


    return 0;
}