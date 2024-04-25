#include <stdio.h>

int main(void) {

  int nm;

  scanf("%d", &nm);

  if(nm >= 620 && nm <= 780) {
    printf("Red");
  }
  else if(nm >= 590 && nm < 620) {
    printf("Orange");
  }
  else if(nm >= 570 && nm < 590) {
    printf("Yellow");
  }
  else if(nm >= 495 && nm < 570) {
    printf("Green");
  }
  else if(nm >= 450 && nm < 495) {
    printf("Blue");
  }
  else if(nm >= 425 && nm < 450) {
    printf("Indigo");
  }
  else if(nm >= 380 && nm < 425) {
    printf("Violet");
  }
  
  return 0;
}