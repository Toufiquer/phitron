#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 
int is_palindrome(char str[]){
    int result = 1;
    int len = strlen(str);
    for(int i = 0; i < len/2; i++){
        if(str[i] != str[len-1-i]){
            result = 0;
            break;
        }
    }
    return result;
}
int main(){
    char str[1000];
    scanf("%s",str); 
    int r = is_palindrome(&str);
    if(r==1){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    return 0;
}

