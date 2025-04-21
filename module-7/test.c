#include<stdio.h>
int main(){
    // ! 
    int arrLength;
    scanf("%d",&arrLength);
int arrN [arrLength];
int arrN2 [3] = {12,65,33};
int arrN3 [] = {12,65,33,354,65,675,7324};

// ! scan arr
for(int i=1;i<=arrLength;i++){
    scanf("%d",&arrN[i]);
}
// !  print arr
// printf("finish add \n");
// for(int j=1;j<=10;j++){
//     printf("%d\n",arrN[j-1]);
// }

// ! input
// for(int i=0;i<arrLength;i++){
    //     scanf("%d",&arrN[i]);
    // }
    // !  output
// for(int i=0;i<arrLength;i++){
//     printf("%d \n",arrN[i]);
// }
// ! reverse
for(int j=arrLength; j>0; j--){
    printf("%d \n",arrN[j]);
}


// ! 
return 0;
}