#include <stdio.h>
#include <string.h>

int main() {

  char Jae[1000];
  char dc[1000];

  scanf("%s", Jae);
  scanf("%s", dc);

  if(strlen(Jae) >= strlen(dc)) {
    printf("go");
  } else {
    printf("no");
  }
  
  return 0;
}