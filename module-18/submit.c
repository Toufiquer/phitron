// ! 2d array
// #include<stdio.h>
// int main(){
    // int r, c;
    // scanf("%d %d", &r, &c);
    // int a[r][c]; // r -> rows, c -> columns

//     for (int i = 0; i <= 2;i++){
//         for (int j = 0; j <= 3;j++){
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for (int i = 0; i <= 2;i++){
//         for (int j = 0; j <= 3;j++){
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//         return 0;
// }


// ! print row 
// #include<stdio.h>
// int main(){
//     // !
//     int r, c, p;
//     scanf("%d %d %d", &r, &c, &p);
//     int a[r][c]; // r -> rows, c -> columns

//     for (int i = 0; i <= 2;i++){
//         for (int j = 0; j <= 3;j++){
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for (int i = 0; i <= 2;i++){
//         if(i == p){
//             for (int j = 0; j <= 3;j++){
//                 printf("%d ", a[i][j]);
//             }
//             printf("\n");
//         }
//     }
//         return 0;
// }


// ! print column
// #include<stdio.h>
// int main(){
//     // !
//     int r, c, p;
//     scanf("%d %d %d", &r, &c, &p);
//     int a[r][c]; // r -> rows, c -> columns

//     for (int i = 0; i <= 2;i++){
//         for (int j = 0; j <= 3;j++){
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for (int i = 0; i <= 2;i++){
//         for (int j = 0; j <= 3;j++){
//                 if(j == p){
//                 printf("%d ", a[i][j]);
//             }
//         }
//             printf("\n");
//     }
//         return 0;
// }


// ! Checking matrix
// #include<stdio.h>
// int main(){
//     // !
//     int r, c;
//     scanf("%d %d", &r, &c);
//     int a[r][c]; // r -> rows, c -> columns

//     for (int i = 0; i <= 2;i++){
//         for (int j = 0; j <= 3;j++){
//             scanf("%d", &a[i][j]);
//         }
//     }
//     if(r==1){
//         printf("Row Matrix\n");
//     }
//     if(c==1){
//         printf("Column Matrix\n");
//     }
//         return 0;
        
// }


// ! diagonal matrix
// #include<stdio.h>
// int main(){
//     // !
//     int r, c;
//     scanf("%d %d", &r, &c);
//     int a[r][c]; // r -> rows, c -> columns

//     int result = 0; // 0 -> false , diagonal matrix
//     for (int i = 0; i <= 2;i++){
//         for (int j = 0; j <= 3;j++){
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for (int i = 0; i <= r;i++){
//         for (int j = 0; j <= c;j++){
//            if(i==j){
//             if(a[i][j] != 0){
//                result=1;
//             }else{
//                 result=0;
//                 break;
//                 }
//             }else{
//                 if(a[i][j] == 0){
//                     result=1;
//                  }else{
//                      result=0;
//                      break;
//                      }
                 
//             }
//         }
//     }
//     if(r==c && result ==1){
//         printf("diagonal matrix \n");
//     }else{
//         printf("not a diagonal matrix \n");
//     }
       
//         return 0;
        
// }

// ! secondary diagonal matrix
#include<stdio.h>
int main(){
    // !
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c]; // r -> rows, c -> columns

    int result = 0; // 0 -> false , diagonal matrix
    for (int i = 0; i < r;i++){
        for (int j = 0; j < c;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r;i++){
        for (int j = 0; j < c;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    int r_num = 0;
    int c_num = c-1;
    for (int i = 0; i < r;i++){
        for (int j = 0; j < c;j++){
           if(i==r_num && j==c_num){
            if(a[i][j] != 0){
                printf("true-1- %d (%d,%d) \n", a[i][j], i+1, j+1);
                result=1;
            }else{
                printf("true-0- %d (%d,%d) \n", a[i][j], i+1, j+1);
                result=0;
                break;
            }
        }else{
            if(a[i][j] == 0){
                    printf("else-1- %d (%d,%d) \n", a[i][j], i+1, j+1);
                    result=1;
                }else{
                     printf("else-0- %d (%d,%d) \n", a[i][j], i+1, j+1);
                     result=0;
                     break;
                     }
                 
            }
        }
        c_num--;
        r_num++;
    }
    if(r==c && result ==1){
        printf("secondary diagonal matrix \n");
    }else{
        printf("not a secondary diagonal matrix \n");
    }
       
        return 0;
        
}