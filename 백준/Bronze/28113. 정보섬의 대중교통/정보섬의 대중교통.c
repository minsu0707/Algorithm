#include <stdio.h>

int main(void) {

  int time, bus, subway;

  scanf("%d %d %d", &time, &bus, &subway);

  if(bus < subway) {
    printf("Bus");
  }
  else if(bus > subway) {
    printf("Subway");
  }
  else if(bus == subway) {
    printf("Anything");
  }

  return 0;
}