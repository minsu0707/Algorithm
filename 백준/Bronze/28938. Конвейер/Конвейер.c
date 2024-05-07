#include <stdio.h>

int main() {

  int N;
  scanf("%d", &N);
  int num;
  int total = 0;

  for (int i = 0; i < N; i++) {
    scanf("%d", &num);

    total += num;
  }

  if (total == 0) {
    printf("Stay");
  }

  else if (total < 0) {
    printf("Left");
  }

  else if (total > 0) {
    printf("Right");
  }

  return 0;
}