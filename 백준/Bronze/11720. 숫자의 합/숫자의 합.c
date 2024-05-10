#include <stdio.h>

int main() {

  int N;
  char number[101];

  scanf("%d\n%s", &N, number);

  int sum = 0;

  for (int i = 0; i < N; i++) {
    sum += number[i] - '0';
  }

  printf("%d", sum);
  
  return 0;
}