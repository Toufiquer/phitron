#include<stdio.h>



// ! function
// int doubleIt(int x){
//     return x * 2;
// }
// int main(){
//     int x = 0;
//     scanf("%d", &x);
//     int y = doubleIt(x);
//     printf("%d", y);

// return 0;
// }

// ! no input but return value
// int doubleIt(){
//             int x = 0;
//     scanf("%d", &x);
//     return x * 2;
// }
// int main(){
//     int y = doubleIt();
//     printf("%d", y);

//     return 0;
// }



// ! Function with no return + parameter
// void printFn(int a){
//      printf("%d", a);
// }
// int main(){
//      printFn(45); 
//     return 0;
// }


// ! Function with no return + no parameter
void scanAndSum(){
    int a, b;
    scanf("%d %d", &a, &b);
    int c = a + b;
    printf("%d", c);
}
int main(){
     scanAndSum(); 
    return 0;
}


// !  Useful math functions
// ! Math
// ! 1. ceil() 4.1 => 5
// ! 2. floor() 4.9 => 4
// ! 3. round 4.5 | 4.9 => 5, 4.4 => 4
// ! 4. sqrt() 4 => 2
// ! 5. pow() 3^2 => 9
// ! 6. abs() -9 => 9