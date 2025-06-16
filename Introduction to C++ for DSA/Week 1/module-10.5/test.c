#include<stdio.h>
#include<string.h>
int main(){
    // ! array
    
    // ! G. Palindrome Array
//     int arrLen = 0;
//     scanf("%d", &arrLen);
//     int newArr[arrLen];
//     for(int i = 0; i < arrLen; i++){
//         scanf("%d", &newArr[i]);
//     }
//     int isPalindrome = 0; // 0 = false, 1 = true
//     int frontElementIdx = 0;
//     int lastElementIdx = arrLen-1;
//     for (int i = arrLen - 1; i >= 0; i--)
//     {
//         if (newArr[frontElementIdx] == newArr[lastElementIdx])
//         {
//             isPalindrome = 1;
//         }else{
//          isPalindrome = 0;
//          break;
//      }
//     frontElementIdx++;
//     lastElementIdx--;
//     }
// if(isPalindrome == 1){
//     printf("YES\n");
// }else{
//     printf("NO\n");
// }

    // ! F. Way Too Long Words
    int arrLen = 0;
    scanf("%d", &arrLen);
    // printf("%d\n", arrLen);
    for (int i = 0;i<arrLen;i++){
          char str[1000001];
        scanf("%s", &str);
        int len = strlen(str);
        if(len > 10){
            char first = str[0];
            char last = str[len-1];
            printf("%c%d%c\n", first, len-2, last);
        }else{
            printf("%s\n", str);
        }
        // printf("%d len; ", len);
    }
    return 0;
}