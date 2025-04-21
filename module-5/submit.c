#include<stdio.h>
int main(){ 
       int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    int maxN=a;
    int minN=a ;
    if(minN>=a){
        minN = a;
    } if (minN >=b){
        minN = b;
    } if(minN >=c){
        minN =c;
    }

    if(maxN<=a){
        maxN = a;
    } if(maxN<=b){
        maxN = b;
    } if(maxN<=c){
        maxN = c;
    }
    printf("minN : %d",minN);
    printf("\nmaxN : %d",maxN);
  
return 0;
};