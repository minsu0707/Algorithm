#include <stdio.h>

int main(void) {

  int T, S;
  scanf("%d %d", &T, &S);

  if(S == 1) {
    printf("280");
  }

  else if (T >= 12 && T <= 16) {
    printf("320");
  }

  else {
    printf("280");
  }
  return 0;
}
