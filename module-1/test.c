#include <stdio.h>
#include<stdbool.h>

int main() {
  int num1 = 10;
  printf("%d\n", num1);

  float num2 = 22.22;
  printf("%.2f\n", num2);

  char text = 'T';
  printf("%c\n", text);

  bool b = true;
  printf("%d\n", b);

  printf("num1 = %d, num2 = %.2f, text = %c\n", num1, num2, text);
  printf("num1 = %d, num2 = %.6f, text = %c\n", num1, num2, text);
  printf(  "\n%c", text);

  printf("\nnew\nnumber 10200\n");

  return 0;
}