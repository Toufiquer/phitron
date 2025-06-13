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
    int N;
    cin >> N;
    Student S[N];
    Student R[N];
    int counter = 0;
    for (int i = 0; i < N; i++){
        cin >> S[i].nm >> S[i].cls >>S[i].s >> S[i].id;
    }
    for (int j = 0; j < N; j++){
        R[j].nm = S[j].nm;
        R[j].cls = S[j].cls;
        R[j].s = S[j].s;
        R[j].id = S[j].id;
    }
    for (int k = N-1; k>=0; k--){
        R[counter].s = S[k].s;
        counter++;
    } 
    for (int i = 0; i < N; i++){
        cout <<   R[i].nm << " " << R[i].cls<< " " << R[i].s << " " << R[i].id << endl;
    }

}