#include<stdio.h>
#include<string.h>
int main(){
    // ! copy string
    // char str1[101], str2[101];
    // scanf("%s %s", &str1,&str2);
    // int len = strlen(str1);
    // for (int i = 0; i <= len;i++){
    //     str2[i]=str1[i] ;
    // }
    //     printf("%s %s", str1, str2);
    
    // !  copy with strcpy
    // char str1[101], str2[101];
    // scanf("%s %s", &str1,&str2);
    // strcpy( str2,str1);
    // printf("%s %s", str1, str2);
    
    // ! concat
    // char str1[101], str2[101];
    // scanf("%s %s", &str1,&str2);
    // int str1l_len = strlen(str1);
    // int str2l_len = strlen(str2);
    // for (int i = 0; i < str2l_len; i++){
    //     str1[i+str1l_len] = str2[i]; 
    // }
    // printf("%d\n", str1l_len);
    // for (int i = 0; i < strlen(str1);i++){
    //     printf("%c", str1[i]);
    // } 

    // ! concat with  strcat
    //    char str1[101], str2[101];
    //     scanf("%s %s", &str1,&str2);
    //     strcat( str2,str1);
    //     printf("%s",  str2);

    // ! compare 
    // char str1[101], str2[101];
    // scanf("%s %s", &str1,&str2);
    // char smallstr[101], bigstr[101];
    // int len1 = strlen(str1);
    // int len2 = strlen(str2);
    // int biglength = 0;
    // if(len1>len2){
    //     biglength = len1;
    // }else{
    //     biglength = len2;
    // } 

    // for (int i = 0;i<biglength;i++){
    //     printf("%d -- %c-%c\n", i,str1[i],str2[i]);
    //     if(str1[i] > str2[i]){
    //         strcat(bigstr, str1);
    //         strcat(smallstr, str2);
    //         break;
    //     }
    //     if(str1[i] < str2[i]){
    //     strcat(bigstr, str2);
    //     strcat(smallstr, str1);
    //     break;
    //     }

    // }
    // int isEqual = strlen(bigstr);
    // if (isEqual==0)
    // {
    //     printf("equal\n");
    // }else{
    //         printf("big string: %s\n", bigstr);
    //         printf("small string: %s\n", smallstr); 
    //     }
    
    // ! compare with strcmp
    char str1[101], str2[101];
    scanf("%s %s", &str1,&str2);
    printf("%d\n", strcmp(str1, str2));
    //  @ -1 0 +1 = small equal big
        
            return 0;
}