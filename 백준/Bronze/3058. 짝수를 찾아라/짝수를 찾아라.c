#include <stdio.h>

int main() {

  int n, total, num, mini, even=0;
  scanf("%d", &n);

  for(int i=0; i<n; i++) {
    total = 0;
    mini = 101;
    
    for(int j=0; j<7; j++) {
      scanf("%d", &num);
      
      if(num % 2 == 0) {//
        even = num;
        total += even;
        if(even < mini) {
          mini = even;
        }
      }//
      
    }
    printf("%d %d\n", total, mini);
  }
  
  return 0;
}