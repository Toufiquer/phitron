#include<stdio.h>

void printNum(int a, int n[]){ 
    if(a < 0){
        return;
    }
    printNum(a - 1, n);
    printf("%d\n", n[a]);
}

int main(){
    // !
    int a = 0;
    scanf("%d", &a);
    int n[a];
    for (int i = 0; i < a;i++){
        scanf("%d", &n[i]);
    }
        printNum(a-1, n);
    return 0;
}