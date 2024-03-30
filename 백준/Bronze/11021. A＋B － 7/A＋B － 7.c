#include <stdio.h>

int main(void)
{
  int n;
  int num1, numn2;
  int total;
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
  {
    scanf("%d %d", &num1, &numn2);
    total = num1 + numn2;
    printf("Case #%d: %d\n", i, total);
  }

  return 0;
}