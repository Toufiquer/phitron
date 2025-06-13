#include<bits/stdc++.h>
using namespace std;


class Student {
  public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b){
    return a.eng_marks == b.eng_marks ? a.math_marks == b.math_marks ? a.id < b.id : a.math_marks > b.math_marks : a.eng_marks > b.eng_marks;
}

int main()
{ 
    int N;
    cin >> N;
    Student S[N];
    for (int i = 0; i < N; i++){
        cin >> S[i].nm >> S[i].cls >>S[i].s >> S[i].id >> S[i].math_marks >> S[i].eng_marks;
    }
   
    sort(S, S + N, cmp);
    for (int i = 0; i < N; i++){
        cout <<   S[i].nm << " " << S[i].cls<< " " << S[i].s << " " << S[i].id <<" " << S[i].math_marks <<" " <<  S[i].eng_marks<< endl;
    }

}