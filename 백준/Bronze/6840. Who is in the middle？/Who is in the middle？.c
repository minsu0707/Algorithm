#include <stdio.h>

int main(void) {

  int a, b, c;

  scanf("%d\n%d\n%d", &a, &b, &c);


  if(a > b && a > c) {
    if(b > c)
    {
      printf("%d", b);
    }
    else{
      printf("%d", c);
    }
  }
  
  else if(b > c && b > a) {
    if(c > a)
    {
      printf("%d", c);
    }
    else {
      printf("%d", a);
    }
  }
  
  else if(c > a && c > b) {
    if(a > b)
    {
      printf("%d", a);
    }
    else {
      printf("%d", b);
    }
  }
  
  return 0;
}
