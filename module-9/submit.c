#include<stdio.h>
int main(){

//     // ! scan old array
    // int a=0;
    // scanf("%d", &a);
    // int oldArr[a];    
    // int newArr[a+1];    
    // for (int i = 0; i < a;i++){
    //     scanf("%d", &oldArr[i]); 
    // }
//     // ! implement task
//     int newIdx = 0, newValue = 0;
//     scanf("%d %d", &newIdx, &newValue);
//     int isUpdated = 0;
//    for (int k = a+1; k >= 0;k--){
//        if(newIdx == k){
//            isUpdated = 1;
//            newArr[k] = newValue;
//         }
//         else if(isUpdated==0){
//             newArr[k] = oldArr[k-1];
//         }else{
//             newArr[k] = oldArr[k];
//        }; 
//     }
//     // ! print both arr
    // for (int j = 0; j < a;j++){
    //     printf("%d ", oldArr[j]); 
    // }
//     printf("\n");
//     for (int l = 0; l <= a;l++){ 
//         printf("%d ", newArr[l]);
//     }

//     // ! remove an element form array
//         int a=0;
//     scanf("%d", &a);
//     int oldArr[a];    
//     int newArr[a-1];    
//     for (int i = 0; i < a;i++){
//         scanf("%d", &oldArr[i]); 
//     }

//     int newIdx = 0;
//     scanf("%d", &newIdx);
//     // ! implement task
//     int isDeleted = 0;
//    for (int k = 0; k <= a-1;k++){
//        if(newIdx == k){
//            isDeleted = 1;
//            newArr[k] = oldArr[k+1];
//         }
//         else if(isDeleted==0){
//             newArr[k] = oldArr[k];
//         }else{
//             newArr[k] = oldArr[k+1];
//        }; 
//     }
//     for (int j = 0; j < a;j++){
//         printf("%d ", oldArr[j]); 
//     }
//     printf("\n");
//     for (int j = 0; j < a-1;j++){
//         printf("%d ", newArr[j]); 
//     }

// // ! Swapping two values
// int a = 0;
// scanf("%d", &a);
// int b = 0;
// scanf("%d", &b);
// int c = 0;
// c = a;
// a = b;
// b = c;
// printf("%d %d", a, b);

// ! Reverse an array
    int a=0;
    scanf("%d", &a);
    int oldArr[a];    
    int newArr[a];  

    for (int i = 0; i < a;i++){
        scanf("%d", &oldArr[i]); 
    }
    int counter = 0;
    for (int j = a-1; j >= 0;j--){
        newArr[j] = oldArr[counter];
        counter++;
    }
    for (int j = 0; j < a; j++)
    {
        printf("%d ", oldArr[j]);
    }
    printf("\n");
    for (int j = 0; j < a;j++){
        printf("%d ", newArr[j]); 
    }
return 0;


}