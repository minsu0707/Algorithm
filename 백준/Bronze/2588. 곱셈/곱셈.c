#include <stdio.h>

int main(void)
{
  int num1, num2;
  int three, four, five, six;
  scanf("%d\n%d", &num1, &num2);

  three = (num2%100)%10 * num1;
  four = (num2%100)/10 * num1;
  five = (num2/100) * num1;
  six = num1 * num2;

  printf("%d\n%d\n%d\n%d", three, four, five, six);
  
  return 0;
}