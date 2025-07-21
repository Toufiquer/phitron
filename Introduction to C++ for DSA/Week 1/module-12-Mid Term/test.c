#include<stdio.h>
int main(){
    // ! problem 1
    //     int a;
    // scanf("%d", &a); 
    // int dividedBy2 = 0;
    // int dividedBy3 = 0;
    // for(int i = 0; i < a; i++){
    //     int k;
    //     scanf("%d", &k);
    //     if(k % 2 == 0 ){
    //         dividedBy2++;
    //     }else if(k%3==0){
    //         dividedBy3++;
    //     }
    // }
    // printf("%d %d", dividedBy2, dividedBy3);
// ! Problem 2
    // int a;
    // scanf("%d", &a);
    // int l = 0, m = 0, n = 0;
    // for (int i = 0; i < a; i++)
    // {
    //     scanf("%d %d %d", &l, &m, &n); 

    //     int singlePersonWorkingDay = l * n; 

    //     int totalWorkers = m + l; 

    //     int totalWorkingDay = singlePersonWorkingDay / totalWorkers; 

    //     int result = 1;
    //     if( n >= totalWorkingDay){
    //         result = n - totalWorkingDay;
    //     } 
         
    //     printf("%d\n", result); 
    //     l = 0, m = 0, n = 0;
    //   }
    // ! problem 3 
    // int a;
    // scanf("%d", &a);
    // for (int i = 0; i < a; i++){ 
    //     int alphaCount = 0;
    //     int smallcount = 0;
    //     int digitCount = 0;
    //     char str[10001];
    //     scanf("%s", str); 
    //     int len = strlen(str); 

    //     for(int j = 0; j < len; j++){ 
    //         if (str[j] >= 'A' && str[j] <= 'Z'){
    //                 alphaCount++;
    //             }else if (str[j] >= 'a' && str[j] <= 'z'){
    //                 smallcount++;
    //             }else if (str[j] >= '0' && str[j] <= '9'){
    //                 digitCount++;
    //             }
            
    //         }
    //         printf("%d %d %d\n", alphaCount, smallcount, digitCount); 

    //  }

        // ! last problem
    // char a[100001];
    // scanf("%s", a);
    // // printf("%s", a);
    // int result [27]={0};
    // for(int j=0; j<strlen(a);j++){
    //     if(a[j] >= 'a' && a[j] <= 'z'){
    //         result[a[j]-97]++;
    //     } 
    // }
    // for (int i = 0; i < 26;i++){
    //     if(result[i] != 0){
    //         printf("%c - %d\n",i+97, result[i]); 
    //     }
    // }
    printf("testing");

    return 0;
}