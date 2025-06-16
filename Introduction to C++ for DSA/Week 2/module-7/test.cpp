#include<bits/stdc++.h>
using namespace std;


class Student {
  public:
    string name;
    int roll;
    int cls;

};
int main()
{
    // ! Same line all input
    //     3
    //     Rakib 5 34
    //     Shakib 4 24
    // Akib 9 30
    // int n;
    // cin >> n;
    // Student s[n];
    // for (int i = 0; i < n; i++){
    //     cin >> s[i].name >> s[i].cls >> s[i].roll;
    // }
    // for (int i = 0; i < n; i++){
    //     cout <<   s[i].name << " " << s[i].cls << " " << s[i].roll << endl;
    // }
    // ! first line  is name  and  second line  is class and roll;
//     3
// Rakib Khan
// 5 34
// Shakib Khan
// 4 24
// Akib Khan
// 9 30
    // int n;
    // cin >> n;
    // Student s[n];
    // for (int i = 0; i < n; i++){
    //     cin.ignore();
    //     getline(cin, s[i].name);
    //     cin >> s[i].cls >> s[i].roll;
    // }
    // for (int i = 0; i < n; i++){
    //     cout <<   s[i].name << " " << s[i].cls << " " << s[i].roll << endl;
    // }

    // ! min and max object 
       
//     int n;
//     cin >> n;
//     Student s[n];
//     for (int i = 0; i < n; i++){
//         cin >> s[i].name >> s[i].cls >> s[i].roll;
//     }
//     int minValue = INT_MAX;
//     for (int i = 0; i < n;i++){
//         // if (min > s[i].roll){
//         //     min = s[i].roll;
//         // }
//         minValue = min(s[i].roll,minValue );
//     }
// cout << minValue << endl;

// ! min with object
    int n;
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++){
        cin >> s[i].name >> s[i].cls >> s[i].roll;
    }
    Student mnStudent;
    mnStudent.roll = INT_MAX;

    int minValue = INT_MAX;
    for (int i = 0; i < n;i++){
        if (mnStudent.roll > s[i].roll){
            mnStudent = s[i];
        } 
    }
cout << mnStudent.name << " " << mnStudent.cls << " " << mnStudent.roll << endl;

        return 0;
}