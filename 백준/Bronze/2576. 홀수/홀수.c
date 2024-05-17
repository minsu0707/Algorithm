#include <stdio.h>

int main() {

  int n, m = 100 ,i;
  int total = 0; 
  for(i=0; i<7; i++) {
    scanf("%d", &n);

    if(n % 2 != 0) {
      total += n;
      if(m > n) {
        m = n;
      }
    }
  }
  
  if(total == 0) {
    printf("-1");
  }
  else{
    printf("%d\n%d", total, m);
  }
  
  return 0;
}