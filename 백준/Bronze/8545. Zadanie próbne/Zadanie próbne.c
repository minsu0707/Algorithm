#include <stdio.h>

int main() {

  char s[10];
  int i, count=0;
  scanf("%s", s);
  
  for(int j=2; j>=0; j--) {
    printf("%c", s[j]);
  }
  
  return 0;
}