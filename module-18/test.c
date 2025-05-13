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