#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){
    // ! Find the Missing Number

    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        int a;
        scanf("%d", &a); 
        int A[a];
        for(int j = 0; j < a; j++){
            scanf("%d", &A[j]); // ! scan full array
        } 
        int B[a];
        for(int j = 0; j < a; j++){
            B[j] = A[j]; // ! copy array
        }
        for(int j = 0; j < a; j++){
            for(int k = j+1; k < a; k++){
                 if(B[j] > B[k]){
                    int temp = B[j];
                    B[j] = B[k];
                    B[k] = temp;
                 }
            }
        }
        
        int C[a];
        for(int j = 0; j < a; j++){
            C[j] =B[j] - A[j]; // ! copy array
        }
        for(int j = 0; j < a; j++){
            int num = C[j];
            int result = abs(num);
            printf("%d ", result); // ! print full array
        }
        printf("\n");
        
    }

    return 0;
}