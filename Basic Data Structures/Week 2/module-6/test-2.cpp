#include <bits/stdc++.h>
using namespace std;

void fun(int *&p){
    p = NULL;
    int y = 200;
    p = &y;
    cout << "In fun:pringting pointer: " << *p << endl;
    cout << "In fun:pringting address:"<< endl;
}

int main(){
    // !
    int x = 10;
    int *p = &x;
    fun(p);
    cout << "In main:pringting pointer " << *p << endl;
    cout << "In fun:pringting address:"<< endl;
    cout << x << endl;

    return 0;
}