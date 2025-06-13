#include<bits/stdc++.h>
using namespace std;


class Student {
  public:
    string nm;
    int cls;
    char s;
    int id;
};
int main()
{
    // ! Same line all input 
    int N;
    cin >> N;
    Student S[N];
    Student R[N];
    for (int i = 0; i < N; i++){
        cin >> S[i].nm >> S[i].cls >>S[i].s >> S[i].id;
    }
    for (int i = 0; i < N; i++){
        R[i].nm = S[i].nm;
        R[i].cls = S[i].cls;
        R[i].s = S[i].s;
        R[i].id = S[i].id;
    }
    for (int i = 0; i < N; i++){ 
        S[i].nm = "";
        S[i].cls=0; 
        S[i].id = 100;
    }
    for (int i = 0; i < N; i++){
        cout <<   S[i].nm << " " << S[i].cls<< " " << S[i].s << " " << S[i].id << endl;
    }
    cout << "R: " << endl;
    for (int i = 0; i < N; i++){
        cout <<   R[i].nm << " " << R[i].cls<< " " << R[i].s << " " << R[i].id << endl;
    }

}