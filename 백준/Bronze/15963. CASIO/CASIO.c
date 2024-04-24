#include <stdio.h>

int main(void) {

  int N, M;
  scanf("%d %d", &N, &M);

  if(N == M) {
    printf("1");
  }
  else if(N != M) {
    printf("0");
  }
  
  return 0;
}