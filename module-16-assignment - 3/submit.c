#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printHash(int n){
    for(int i=0;i<n;i++){
        printf("#");
    }
    printf("\n");
}
void printDash(int n){
    for(int i=0;i<n;i++){
        printf("-");
    }
    printf("\n");
}
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){ 
        printHash(i);
    }
    for (int i = a-1; i >= 1;i--){ 
        printDash(i);
    }
        return 0;
}