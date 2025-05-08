#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count_before_one(int n[], int m){
    int counter = 0;
    for (int i = 0; i < m;i++){
        if(m !=0){
            if (n[i] != 1){
                counter++;
            }else{
                break;
            }
        }
    }
    return counter;
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int m = count_before_one(a, n);
    printf("%d", m);
    return 0;
}

