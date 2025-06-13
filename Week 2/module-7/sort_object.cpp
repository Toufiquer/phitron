#include<bits/stdc++.h>
using namespace std;


class Student {
  public:
    string name;
    int roll;
    int cls;

};


bool cmp(Student a, Student b){
    return a.cls == b.cls ? a.roll < b.roll : a.cls < b.cls;
}

int main()
{

// ! sort object with bool
    int n;
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++){
        cin >> s[i].name >> s[i].cls >> s[i].roll;
    }
    sort(s, s + n, cmp);
    for (int i = 0; i < n;i++){
        cout<< s[i].name <<" " << s[i].cls << " "<<s[i].roll << endl;
    }

        return 0;
}