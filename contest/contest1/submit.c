#include<stdio.h>
#include<string.h>
int main(){
    int a = 0;
    char b[1000000];
    int result = 0;
    scanf("%d", &a);
    scanf("%s", b);

    // printf("%d\n", a);
    // printf("%s\n", b); 
    for (int i = 0; i < a;i++){
        // printf("%d %c\n", i,b[i]);
        result += b[i];
    }
    // printf("%d", result);

    if(result%3==0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}