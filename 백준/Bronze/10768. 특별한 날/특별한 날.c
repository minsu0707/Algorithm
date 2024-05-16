#include <stdio.h>

int main() {

  int month, day;
  scanf("%d\n%d", &month, &day);

  if (month > 2) {
    printf("After");
  } 
  else if (month == 2) {
    if (day == 18) {
      printf("Special");
    }
    else if(day > 18) {
      printf("After");
    }
    else if(day < 18) {
      printf("Before");
    }
  } 
  else if (month < 2) {
      printf("Before");
  }
  

  return 0;
}