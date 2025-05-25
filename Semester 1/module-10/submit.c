#include<stdio.h>
#include<string.h>
int main(){
//  ! D. Strings

    char str1[1000001];
    char str2[1000001];
    scanf("%s %s", &str1, &str2);
    
    int arr1Len = strlen(str1);
    int arr2Len = strlen(str2);
    char str3[arr1Len+arr2Len+1];
    int arr3Len = arr1Len + arr2Len + 1;

    for(int i = 0; i < arr3Len ; i++){
     if(i < arr1Len){
         str3[i] = str1[i];
        } else{
         str3[i] = str2[i-arr1Len];
     }
    }
    char a = str1[0];
    str1[0] = str2[0];
    str2[0] = a;
    printf("%d %d\n", arr1Len, arr2Len);
    printf("%s\n", str3);
    printf("%s %s", str1, str2);

    
        return 0;
}