

#include <stdio.h>

int main(void)
{
  int n;
  int num1, num2;
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    {
      scanf("%d %d", &num1, &num2);
      printf("Case #%d: %d + %d = %d\n", i, num1, num2, num1 + num2);
    }

  return 0;
}