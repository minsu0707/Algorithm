#include <stdio.h>

int main(void)
{
  int n, v, count = 0;
  scanf("%d", &n);
  int ary[n];

  for(int i=0; i<n; i++) {
    scanf("%d", &ary[i]);
  }
    scanf("%d", &v);
  for(int i=0; i<n; i++){
    if(v == ary[i]) {
      count++;
    }
  }
  
  printf("%d", count);

  return 0;
}