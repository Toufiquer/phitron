#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 void odd_even(){
    int n;
    scanf("%d",&n);
    if(n<0){
        n = 0;
    }
    int a[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int odd = 0;
    int even = 0;
    for(int i = 0; i < n; i++){
        if(a[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("%d %d", even,odd);
 }
 
int main(){
    odd_even();

    return 0;
}

