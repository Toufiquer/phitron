#include<stdio.h>
#include<string.h>
int main(){
    // ! array
    // char a[11];
    // for(int i=0;i<=10;i++){
    //     scanf("%c",&a[i]);
    // }
    // for(int i=0;i<=10;i++){
    //     printf("%c",a[i]);
    // }

    // // ! char array
    // char str[11];
    // scanf("%s",&str);
    // printf("%s",str);
  
    // // ! char array
    // char str[20];
    // fgets(str, 20 , stdin);
    // printf("%s",str);

    // ! string initialization
    // char str[20] = "hello world";
    // char str2[20] = {'2',' ','h','e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd','\0'};
    // printf("%s",str2);

    // ! length of string
    // char str[20] = "hello world";
    // char str[201];
    // fgets(str, 200 , stdin);

    // for (int i = 0;i<200;i++){
    //     if(str[i] == '\0'){
    //         printf("%d",i);
    //         break;
    //     }
    // }

    // ! length of string with strlen
    // char str[20] = "hello world";
    // char str[201];
    // fgets(str, 200 , stdin);
    // int len = strlen(str);
    // printf("%d", len);


    // ! print before /
    // char str[20] = "hello world";
    // char str[201];
    // fgets(str, 200 , stdin);
    // for(int i = 0;str[i] != '/';i++){
    //     printf("%c",str[i]);
    // } 
    // for(int i = 0;i<200;i++){
    //     if(str[i] != '/'){
    //         printf("%c",str[i]);
    //     }else{
    //         break;
    //     }
    // } 


    // ! print sum
    // char str[201];
    // scanf("%s",str);
    // int sum=0 ;
    // for(int i = 0;str[i] != '\0';i++){ 
    //     sum += str[i] - 48;
    // } 
    // printf("\n%d",sum);

    // ! add two array
    int arr1Len = 0;
    scanf("%d",&arr1Len);
    int arr1[arr1Len];
    for(int i = 0;i<arr1Len;i++){
        scanf("%d",&arr1[i]);
    }
    int arr2Len = 0;
    scanf("%d",&arr2Len);
    int arr2[arr2Len];
    for(int i = 0;i<arr2Len;i++){
        scanf("%d",&arr2[i]);
    }
    int arr3Len = arr1Len + arr2Len;
    int arr3 [arr3Len];
    for(int i = 0;i<arr3Len;i++){
        if(i<arr1Len){
            arr3[i] = arr1[i];
        }else{
            arr3[i] = arr2[i-arr1Len];
        }
    }
    for(int i = 0;i<arr3Len;i++){
        printf("%d ",arr3[i]);
    }

    return 0;
}