#include <stdio.h>

int main(void) {

  int i, n[9];

  for (i = 0; i < 8; i++) {

    scanf("%d", &n[i]);
  }

  for (i = 0; i < 8; i++) {

    if(n[i] == 9) {

      printf("F");
      return 0;
    }
  }

  printf("S");

  return 0;
}