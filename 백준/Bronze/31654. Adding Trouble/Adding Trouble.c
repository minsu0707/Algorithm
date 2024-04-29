#include <stdio.h>

int main(void) {

  int n1, n2;
  int answer;

  scanf("%d %d %d", &n1, &n2, &answer);

  if (n1 + n2 == answer) {
    printf("correct!");
  } else {
    printf("wrong!");
  }

  return 0;
}