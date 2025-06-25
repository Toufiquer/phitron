#include <bits/stdc++.h>
using namespace std;

void printSpeace(){
    cout << " ";
}
void printFirstSlash(){
    cout << "/";
}
void printSecondSlash(){
    cout << "\\";
}
void printStar(){
    cout << "X";
}
int upperSpaceCount = 1;
int lowerSpaceCount = 1;
void printUpperBox(int N,int i){
    upperSpaceCount -= 2;
    for (int j = 1; j <= i-1;j++){
        printSpeace();
    }
    printSecondSlash();
    for (int j = 1; j <= upperSpaceCount;j++){
        printSpeace();
    }
    printFirstSlash();
    for (int j = 1; j <= i-1;j++){
        printSpeace();
    }
};

void printLowerBox(int N,int i){
    for (int j = N-i; j > 0 ;j--){
        printSpeace();
    }
    printFirstSlash();
    for (int j = 1; j <= lowerSpaceCount;j++){
        printSpeace();
    }
    printSecondSlash();
    for (int j = N-i; j > 0 ;j--){
        printSpeace();
    }
    lowerSpaceCount += 2;
};

int main(){
    int N;
    cin >> N;
    upperSpaceCount = N;
    lowerSpaceCount = 1;
    for (int i = 1; i <= N;i++){
        // ! print star
        int mid = (N / 2);
        if(i == mid+1){
            for (int j = 1; j <= mid;j++){
                printSpeace();
            }
            printStar();
            for (int j = 1; j <= mid;j++){
                printSpeace();
            }
        }else if(i>mid){
            printLowerBox(N,i);
        }else{
            printUpperBox(N,i);
        }
        cout << endl;
    }

        return 0;
}

