#include <stdio.h>

int main(void) {

  int i, N;
  long long int sum = 1;

  scanf("%d", &N);

  for (i = 1; i <= N; i++) {
    sum *= i;
  }

  printf("%lld", sum);

  return 0;
}