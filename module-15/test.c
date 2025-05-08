#include<stdio.h>
#include<string.h>

// ! Function with string
void runArr(char x[]){
    printf("%s\n", x);
    printf("%d", strlen(x));
}
 
int main(){
    char a[5];
    scanf("%s", a);
    runArr(a);
    return 0;
}

