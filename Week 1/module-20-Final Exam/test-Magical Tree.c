#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printSpace(int n){
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}

void printBody(int n){
        for (int k = 0; k < 5; k++){
            printSpace(5);
        for (int i = 0; i < n; i++){
            printf("*");
        }
        printf("\n");
}
}

void printStar(int n){
    for (int i = 0; i < n; i++){
        printf("*");
    } 
}
void printLine(int n){
    int spaceCount = n-1;
    int starCount = 1;
    for (int i = 0; i < n; i++){
        printSpace(spaceCount);
        printStar(starCount);
        printf("\n");
        starCount += 2;
        spaceCount -= 1;
    }
}

void printHead(int n){
    int lineCount = 5;
    for (int i = 1; i <= n; i += 2)
    {
        lineCount++;
    }
    printLine(lineCount);
}

void printTree(int n){
    printHead(n);
    printBody(n);
}

int main(){
    // ! Find the Missing Number

    int n;
    scanf("%d", &n);
    printTree(n);

    return 0;
}