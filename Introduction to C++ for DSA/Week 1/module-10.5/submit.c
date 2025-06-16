#include<stdio.h>
int main(){
    int arrLen = 0;
    scanf("%d", &arrLen);
    int newArr[arrLen];
    for(int i = 0; i < arrLen; i++){
        scanf("%d", &newArr[i]);
    }
    int isPalindrome = 0; // 0 = false, 1 = true
    int frontElementIdx = 0;
    int lastElementIdx = arrLen-1;
    for (int i = arrLen - 1; i >= 0; i--)
    {
        if (newArr[frontElementIdx] == newArr[lastElementIdx])
        {
            isPalindrome = 1;
        }else{
         isPalindrome = 0;
         break;
     }
    frontElementIdx++;
    lastElementIdx--;
    }
if(isPalindrome == 1){
    printf("YES\n");
}else{
    printf("NO\n");
}
    return 0;
}