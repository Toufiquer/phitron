#include<stdio.h>

int countFactorial(int a) {
    if(a==0){
        return 1;
    }else{
        int r = countFactorial(a - 1);
        return r*a;
    }
};
 
int main(){
    // !
    int a;
    scanf("%d", &a);
    int r = countFactorial(a);
    printf("%d", r);
    printf("\n");
    return 0;
}
