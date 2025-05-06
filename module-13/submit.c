#include<stdio.h>
int main(){
    // ! 
    int a;
    scanf("%d", &a);
    for (int i = a; i >= 1;i--){
        for (int j = 1; j <= i;j++){
            printf("* ");
        }
        printf("\n");
    }


        // !   piarmid with space
    int a;
    scanf("%d", &a);
    if(a%2==0){
        a--;
    }
    int firstSpace=1; // 0 = false | 1 = true
    int firstSpaceCount = a;

    int lastSpace=1; // 0 = false | 1 = true
    int lastSpaceCount = a;

    int star = 1; // 0 = false | 1 = true
    int starCount = 1;
    for (int i = a; i >= 1;i--){
        firstSpaceCount-=1;
        lastSpaceCount-=1;
        if(firstSpace==1){
            for (int i = 1; i <= firstSpaceCount;i++){
                    printf("  ");
            }
        }
        if(star==1){
               for (int i = 1; i <= starCount;i++){
                   int doWhile = 0;
                   int doWhileCount = 0;
                //    first
                if(starCount ==1){
                printf("*");
                }else if(i==1){
                    printf("* ");
                }else if(i == starCount){
                    //    last
                    printf("*");
                }else{
                    printf("* ");
                }
            }
        }
        if(lastSpace==1){
               for (int i = 1; i <= lastSpaceCount;i++){
                printf("  ");
            }
        }
        starCount += 2;
        printf("\n");
    }
        return 0;
}