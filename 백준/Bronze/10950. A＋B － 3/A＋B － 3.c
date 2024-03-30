#include <stdio.h>

int main(void)
{
  int n;
  int num1, num2;
  int total;
  scanf("%d", &n);
  for(int i=0; i<n; i++)
    {
      scanf("%d %d", &num1, &num2);
      total = num1 + num2;
      printf("%d\n", total);
    }

  return 0;
}