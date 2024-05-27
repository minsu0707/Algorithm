#include <stdio.h>

int main() {

  int n;
  int total = 0;

  for(int i=0; i<5; i++) {
    scanf("%d", &n);

    total += n;
  }

  printf("%d", total);
}