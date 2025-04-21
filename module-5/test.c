#include<stdio.h>
int main(){
    // ! video-1 
    // int a,b;
    // scanf("%d %d", &a, &b);
    // if(a>=b){
    //     printf("Yes");
    // }else{
    //     printf("No");
    // }


    // ! video-2 * Multiples
    // int a ,b; // 9 3
    // scanf("%d %d", &a, &b);
    // if(a % b == 0 || b % a == 0){
    //     printf("Multiples");
    // }else{
    //     printf("No Multiples");
    // }

    // ! video-3 * N char
    // char a ;
    // scanf("%c",  &a);
    // if(a>='A' && a<='Z'){
    //     a|=' ';
    //     printf("%c",a);
    // }else{
    //     a&='_';
    //     printf("%c",a);
    // }
    // ! -- -- ---
    // char a ;
    // scanf("%c",  &a);
    // if(a>='A' && a<='Z'){
    //     printf("%c",a+32);
    // }else{
    //     printf("%c",a-32);
    // }

    // ! video - 4 * P.First Digits
    // int a;
    // scanf("%d", &a);
    // int lastD = a;
    // while(lastD>=10){
    //     lastD = lastD/10;
    // }
    // if(lastD%2==0){
    //     printf("EVEN");
    // }else{
    //     printf("ODD");
    // }

    // ! video - 5 *  M. Digit, Capital, small 
    // const char a;
    // scanf("%c", &a);
    // if(a<65){
    //     printf("IS DIGIT");
    // }else if(a<97){
    //     printf("ALPHA");
    //     printf("\nIS CAPITAL");
    // }else{
    //     printf("ALPHA");
    //     printf("\nIS SMALL");
    // };
     
    // ! video - 6 * K. Max and Min
    int a, b, c;
    scanf("%d %d %d ", &a, &b, &c);
    int bigN;
    int smallN;
    // ! find big number
if(a>=b && a>=c){
    bigN = a;
}else if(b>=c && b>=a){
    bigN = b;
}else{
    bigN =c;
}
    // ! find small number
if(a<=b && a<=c){
    smallN = a;
}else if(b<=c && b<=a){
    smallN = b;
}else{
    smallN =c;
}
       printf("%d %d", smallN,bigN);
return 0;
}