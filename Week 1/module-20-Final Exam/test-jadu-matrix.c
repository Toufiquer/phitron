#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrimeDiagonalHasAllOne(int n, int m, int arr[n][m]){
    int result = 0; 
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(i==j){
                if(arr[i][j]==1){
                    result = 1; 
                }else{
                    result = 0;
                    return 0;
                }
            }
        } 
    }
    return result;
}
int isSecondaryDiagonalHasAllOne(int n, int m, int arr[n][m]){
    int result = 0;
    int rowNumber = 0;
    int columnNumber = m-1;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
                if(i== rowNumber && j ==  columnNumber){ 
                    if(arr[i][j]==1){
                        result = 1;
                    }else{
                        result = 0;
                        return 0;
                    }
                }
            }
            columnNumber--;
            rowNumber++;
            // printf("\n");
        }
    return result;
}

int isPrimaryElement(int i, int j){
    int result = 0;
    if(i==j){
        result = 1;
    }else{
        result = 0;
        return 0;
    }
    return result;
}
int isSecondaryElement(int i, int j, int rowNumber, int columnNumber){
    int result = 0;
    if(i== rowNumber && j ==  columnNumber){
        result = 1;
    }
    return result;
}

int isOtherElementIsZero(int n, int m, int arr[n][m]){
    int result = 1;

    int rowNumber = 0;
    int columnNumber = m-1;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            int isPrimaryElementResult = isPrimaryElement(i,j);
            int isSecondaryElementResult = isSecondaryElement(i, j, rowNumber, columnNumber);
            if(isPrimaryElementResult==0 && isSecondaryElementResult==0){
                if(arr[i][j]==0){
                    result = 1;
                }else{
                    return 0;
                }
            }
            }
            columnNumber--;
            rowNumber++;
            // printf("\n");
        }


    return result;
}
int main(){
    // ! Find the Missing Number

    int n,m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int result = 1; // 0=> NO, 1=> YES [Jadu Matrix]

    if(n!=m){
        result = 0;
    }else{
        // ! scan full matrix
        for (int i = 0; i < n;i++){
            for (int j = 0; j < m;j++){
                scanf("%d", &arr[i][j]);
            }
        }
        
        // ! check prime diagonal
        result = isPrimeDiagonalHasAllOne(n,m,arr);
        if(result == 1){
            // ! check secondary diagonal
            result = isSecondaryDiagonalHasAllOne(n,m,arr);
        }
        if(result ==1){
            result = isOtherElementIsZero(n, m, arr);
        }
    }
    if(result == 1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

        return 0;
}