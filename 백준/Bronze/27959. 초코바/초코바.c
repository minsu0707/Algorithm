#include <stdio.h>

int main(void) {

  int N, M = 0;
  int money = 0;
  int product;

  scanf("%d %d", &N, &M);

  money = N * 100;
  if(money >= M) {
    printf("Yes");
  }
  else {
    printf("No");
  }
    
  return 0;
}