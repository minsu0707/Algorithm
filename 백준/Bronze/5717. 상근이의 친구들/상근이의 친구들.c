#include <stdio.h>


void friends() {
  int bf, gf;
  while(1) {
    scanf("%d %d", &bf, &gf);
    if(bf == 0 && gf == 0) 
      break;
    printf("%d\n", bf + gf);
  }
}

int main() {
  
    friends();

  return 0;
}