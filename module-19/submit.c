//  ! Mirror array
// #include<stdio.h>
// int main(){
//     // !
//     int r, c;
//     scanf("%d %d", &r, &c);
//     int a[r][c]; // r -> rows, c -> columns
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     printf("\n");
//     for(int i=0;i<r;i++){
//         for(int j=c;j>0;j--){ 
//             printf("%d ", a[i][j-1]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


// ! recursion print 
// #include<stdio.h>

// void rec(int a) {
//     if(a==0){
//         return;
//     }

//     printf("%d ", a % 10);
//     rec(a / 10);

// };
// void printLine(){
//     int a;
//     scanf("%d ", &a);
//     rec(a);
//     printf("\n");
// }
// int main(){
//     // !
//     int r;
//     scanf("%d ", &r);
//     for (int i = 1; i <= r;i++){
//         printLine();
//     }

//         return 0;
// }


// ! print digits
// #include<stdio.h>

// void rec(char a[]) {
//     if(a[0]=='\0'){
//         return; 
//     }else{
//         printf("%c ", a[0]);
//         rec(a + 1);
//     }
// };
// void printLine(){
//     char a[1000000];
//     scanf("%s ", a);
//     rec(a);
//     printf("\n");
// }
// int main(){
//     // !
//     int r;
//     scanf("%d ", &r);
//     for (int i = 1; i <= r;i++){
//         printLine();
//     }

//         return 0;
// }


// ! Count length
// #include<stdio.h>

// int rec(char a[],int idx) {
//     if(a[idx]=='\0'){
//         return 0; 
//     }else{
//     int r = rec(a, idx+1);
//     return r += 1;
//     }
// };
 
// int main(){
//     // !  
//     char a[1000000];
//     scanf("%s ", a);
//     int r = rec(a,0);
//     printf("%d", r);
//     printf("\n");
//         return 0;
// }


// ! count vowels
// #include<stdio.h>

// int rec(char a[],int idx) {
//     if(a[idx]=='\0'){
//         return 0; 
//     }else{
//     int r = rec(a, idx+1);
//     if(a[idx]=='a' || a[idx]=='e' || a[idx]=='i' || a[idx]=='o' || a[idx]=='u' ||a[idx]=='A' || a[idx]=='E' || a[idx]=='I' || a[idx]=='O' || a[idx]=='U'){
//     return r += 1;
//     }else{
//         return r;
//     }
// };}
 
// int main(){
//     // !  
//     char a[1000000];
//     scanf("%s ", a);
//     int r = rec(a,0);
//     printf("%d", r);
//     printf("\n");
//         return 0;
// }


// ! Factorial Count
// #include<stdio.h>

// int countFactorial(int a) {
//     if(a==0){
//         return 1;
//     }else{
//         int r = countFactorial(a - 1);
//         return r*a;
//     }
// };
 
// int main(){
//     // !
//     int a;
//     scanf("%d", &a);
//     int r = countFactorial(a);
//     printf("%d", r);
//     printf("\n");
//     return 0;
// }
