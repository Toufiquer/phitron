#include<stdio.h>
int main(){
    // !

    int a;
    scanf("%d", &a);
    int scanArr[11];
    for (int i = 0; i < 11; i++)
    {
        scanf("%d", &scanArr[i]);
    }

    int arr[11]={0};

for(int j=0;j<a;j++){

    int unknownN = scanArr[j];
    arr[unknownN]++;
  
   }


for(int k=0;k<11;k++){
    printf("%d ", scanArr[k]);
    
}
printf("\n"); 
for(int k=0;k<11;k++){
    printf("%d ", arr[k]);
} 


    return 0;
}