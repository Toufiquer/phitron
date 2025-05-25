#include<stdio.h>

int runArr(){
    int a = 20;
    int b = 20;
    printf("%d %p\n", a, &a);
    printf("%d %p\n", b, &b);
    return 0;
}
int main(){
    // ! 

        // ! pointer
        int a = 10;
        printf("%d\n", a);
        printf("%p\n", &a);
        runArr();
    //  ! pointer variable
        int *addressOfVariable;
        addressOfVariable = &a;
        printf("p %p\n", addressOfVariable);
        printf("p %p\n", *addressOfVariable);
        printf("d %d\n", *addressOfVariable);
    

return 0;
}


// ! Pass by value
// int fun(int x){
//     x = 20;
//     printf("fun x - location - %p\n", &x);
// }
// int main(){

//     int x = 10;
//     fun(x);
//     printf("main x - location - %p\n", &x);
//     return 0;
// }


// ! Pass by reference
// int fun(int *x){
//     *x = 20;
//     printf("fun x - location - %p\n", &x);
// }
// int main(){

//     int x = 10;
//     fun(&x);
//     printf("main x - location - %d\n", x);
//     printf("main x - location - %p\n", &x);
//     return 0;
// }



// !  Pointer in array
// int main(){
//     int a[5] = {2, 3, 6, 5, 5};
//     printf("%p\n", &a[0]);
//     printf("%p\n", &a[1]);
//     printf("%p\n", &a[2]);
//     printf("%p\n", &a[3]);
//     printf("%p\n", &a[4]);


//     return 0;
// }

// !  Pointer in array
// void runArr(int x[]){
//     x[0] = 100;
// }

// int main(){
//     int a[5] = {2, 3, 6, 5, 5};
//     runArr(a);

//     for(int i = 0; i < 5; i++){
//         printf("%d\n", a[i]);
//     }

//     return 0;
// }

// ! Function with string
// void runArr(char x[]){
//     printf("%s\n", x);
//     printf("%d", strlen(x));
// }
 
// int main(){
//     char a[5];
//     scanf("%s", &a);
//     runArr(&a);
//     return 0;
// }

