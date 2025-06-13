#include<stdio.h>
int main(){
     int arrLen = 0;
     scanf("%d", &arrLen);
     char sorOrder = 1;//  1= asc;
     int newArr[arrLen];
     for (int i = 0; i < arrLen; i++)
     {
         scanf("%d", &newArr[i]);
     }

    for (int i = 0; i < arrLen;i++){ 
        for (int k =i+1; k < arrLen;k++){
            if(sorOrder==1){

                // asc 1 2 3
                if(newArr[i]>newArr[k]){
                    int xx = newArr[i];
                    newArr[i] = newArr[k];
                    newArr[k] = xx;
                }
            }else{

                // dsc 3 2 1
                if(newArr[i] < newArr[k]){
                    int xx = newArr[i];
                    newArr[i] = newArr[k];
                    newArr[k] = xx;
                }
            }
        }
    }


    for (int i = 0; i < arrLen;i++){
        printf("%d ", newArr[i]);
    }
 

        return 0;
}