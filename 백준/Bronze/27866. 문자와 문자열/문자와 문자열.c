#include <stdio.h>
#include <string.h>

int main() {

  char S[1001];
  int n;
  scanf("%s\n%d", S, &n);

  printf("%c", S[n - 1]);
  
  return 0;
}