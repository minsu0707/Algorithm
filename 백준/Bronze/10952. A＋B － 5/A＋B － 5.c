#include <stdio.h>

int main(void)
{
  int num1, num2;
  int total;
  
  while(1)
    {
      scanf("%d %d", &num1, &num2);
      if(num1 == 0 && num2 == 0)
      {
        break;
      }
      total = num1 + num2;
      printf("%d\n", total);
    }

  return 0;
}