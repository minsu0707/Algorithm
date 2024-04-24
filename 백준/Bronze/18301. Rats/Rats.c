#include <stdio.h>

int main(void) {

  int N, N2, N12;

  scanf("%d %d %d", &N, &N2, &N12);

  printf("%d", (N+1)*(N2+1)/(N12+1)-1);
  
  return 0;
}