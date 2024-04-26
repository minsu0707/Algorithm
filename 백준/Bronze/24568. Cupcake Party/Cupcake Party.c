#include <stdio.h>

int main(void) {

  int box, minibox;
  int cupcake;
  int total;
  
  scanf("%d\n%d", &box, &minibox);

  cupcake = box * 8 + minibox * 3;

  total = cupcake - 28;

  printf("%d", total);
  
  return 0;
}