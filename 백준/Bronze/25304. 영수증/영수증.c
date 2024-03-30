#include <stdio.h>

int main(void)
{
  int totalAmount;
  int n;
  int price, quantity;
  int total = 0;
  scanf("%d\n%d", &totalAmount, &n);

  for(int i=0; i<n; i++)
    {
      scanf("%d %d", &price, &quantity);
      total += price * quantity;
    }
  if(total == totalAmount)
  {
    printf("Yes");
  }
  else if(total != totalAmount)
  {
    printf("No");
  }

  return 0;
}