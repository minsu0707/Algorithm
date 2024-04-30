#include <stdio.h>

int main(void) {

  int K, M;

  scanf("%d %d", &K, &M);

  if(K%M == 0) {

    printf("Yes");
  }
  else {
    printf("No");
  }
    
  return 0;
}