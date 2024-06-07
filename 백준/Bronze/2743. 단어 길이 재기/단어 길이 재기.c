#include <stdio.h>
#include <string.h>

int main() {

  char s[101];
  int count = 0;
  scanf("%s", s);

  for(int i = 1; i <= strlen(s); i++){ 
    count++;
  }
  

  printf("%d", count);
  
  return 0;
}