#include <stdio.h>

int main() {

  int N = 0;
  int i;
  int total;
  int count = 0;
  scanf("%d", &N);

  for (i = 1; i <= N; i++) {
    count += i;
  }
  printf("%d\n", count);

  for(i=0; i<=N; i++) {
    total = count * count;
  }
  printf("%d\n", total);

  for(i=0; i<=N; i++) {
    i += N*N*N;
  }
  printf("%d", total);
  
  return 0;
}