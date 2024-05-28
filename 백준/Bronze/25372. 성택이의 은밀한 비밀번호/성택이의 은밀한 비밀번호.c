#include <stdio.h>
#include <string.h>

int main() {

  int n;
  scanf("%d", &n);
  char s[21];

  for(int i=0; i<n; i++) {
    scanf("%s", s);

    if(strlen(s) >= 6 && strlen(s) <= 9) {
      printf("yes\n");
    }
    else {
      printf("no\n");
    }
  }
  
  return 0;
}