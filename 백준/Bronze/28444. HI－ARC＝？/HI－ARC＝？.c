#include <stdio.h>

int main() {

  int i, i1, i2, i3, i4;
  scanf("%d %d %d %d %d", &i, &i1, &i2, &i3, &i4);

  printf("%d", (i*i1) - (i2*i3*i4));
  
  return 0;
}