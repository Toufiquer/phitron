#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printSpace(int n){
    for(int i=0;i<n;i++){
        printf(" ");
    } 
}
void printHash(int n,int m){
    printSpace(m);
    for(int i=0;i<n;i++){
        printf("#");
    }
    printf("\n");
}
void printDash(int n,int m){
    printSpace(m);
    for(int i=0;i<n;i++){
        printf("-");
    }
    printf("\n");
}
int main(){
    int a;
    scanf("%d",&a);
    int hashCount = 1;
    for(int i=1;i<=a;i++){ 
        int k = a-i;
        if(i%2!=0){
            printHash(hashCount,k);
        }else{
            printDash(hashCount,k);
        }
        hashCount += 2;
    }
    hashCount -= 2;
    for (int i = a-1; i >= 1;i--){ 
        hashCount -= 2;
        int k = a-i;
        if(i%2!=0){
            printHash(hashCount,k);
        }else{
            printDash(hashCount,k);
        }
    }
        return 0;
}