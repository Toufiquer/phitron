#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printNumber(int n, int m){
    for(int i=0;i<m;i++){
        printf(" ");
    }
    for(int i=n-1;i>=0;i--){
        printf("%d",i+1);
    }
}

int main(){
    int a;
    scanf("%d",&a);
 for(int i=1;i<=a;i++){
    printNumber(i,a-i);
    printf("\n");
 }
        return 0;
}