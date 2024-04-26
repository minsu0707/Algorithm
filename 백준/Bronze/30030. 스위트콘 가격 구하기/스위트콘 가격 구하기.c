#include <stdio.h>

int main(void) {

  int B;
  int money;

  scanf("%d", &B);
  
  money = B - B/11;

  printf("%d", money);
    
  return 0;
}