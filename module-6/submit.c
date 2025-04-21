#include<stdio.h>
int main(){ 
  int a = 0;
  scanf("%d",&a);
  for(int i=1;i<=a;i++){
    long long int scanN =0;
    scanf("%d",&scanN);
    if(scanN==0){
      printf("%d",0);
    };
    while(scanN>=1){
      if(scanN>9){
        int lastD = scanN%10;
        printf("%d ",lastD); 
        scanN = scanN/10;
      }else{
        printf("%lld ",scanN); 
        scanN=0;
      }
    }
    printf("\n");
  }
return 0;
};