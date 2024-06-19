#include <stdio.h>

int main() {

  int N;
  scanf("%d", &N);
  int num, count = 0;

  for(int i=0; i<N; i++) {
    scanf("%d", &num);

    if(num % 2 == 0) {
      count++;
    }
    else if(num % 2 != 0) {
      count--;
    }
  }

  if(count > 0) {
    printf("Happy");
  }
  else {
    printf("Sad");
  }
  
  return 0;
}