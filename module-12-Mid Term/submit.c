#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int a;
    scanf("%d", &a);
    int l = 0, m = 0, n = 0;
    for (int i = 0; i < a; i++)
    {
        scanf("%d %d %d", &l, &m, &n); 

        int singlePersonWorkingDay = l * n; 

        int totalWorkers = m + l; 

        int totalWorkingDay = singlePersonWorkingDay / totalWorkers; 

        int result = 1;
        if( n >= totalWorkingDay){
            result = n - totalWorkingDay;
        } 
         
        printf("%d\n", result); 
        l = 0, m = 0, n = 0;
      }
    return 0;
}