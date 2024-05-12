#include <stdio.h>

int main() {

  int n, num;
  scanf("%d", &n);

  int sum = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &num);
    
    sum += num; 
  }

  printf("%d", sum);

  return 0;
}