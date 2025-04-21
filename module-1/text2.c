#include<stdio.h>
int main(){
  int a ;
  float f ;
  char c ;
  // scanf("%d",&a);
  // scanf("%f",&f);
  // scanf("%c",&c);

  scanf("%d %f %c", &a, &f, &c);

  printf("%d %f %c",a,f,c);

  long long int aa = 999999999999999999;
  printf("\n%lld", aa);

  double bb = 36253.43334343455;
  printf("\n%.11lf",bb);

  return 0;
}