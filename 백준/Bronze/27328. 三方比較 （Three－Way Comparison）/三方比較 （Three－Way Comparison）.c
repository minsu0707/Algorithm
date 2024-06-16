#include <stdio.h>

int main() {

  int A, B;
  scanf("%d", &A);
  scanf("%d", &B);

  if(A < B) {
    printf("-1");
  }
  else if(A == B) {
    printf("0");
  }
  else if(A > B) {
    printf("1");
  }
  
  return 0;
}