#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);
  int num1, num2;
  
  for(int i=0; i<n; i++) {
    scanf("%d %d", &num1, &num2);
    printf("%d\n", num1 + num2);
  }
  
  return 0;
}