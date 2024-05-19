#include <stdio.h>
#include <string.h>

int main() {

  char input[20];
  scanf("%s", input);

  if(strcmp(input, "SONGDO") == 0) {
    printf("HIGHSCHOOL");
  }
  else if(strcmp(input, "CODE") == 0) {
    printf("MASTER");
  }
  else if(strcmp(input, "2023") == 0) {
    printf("0611");
  }
  else if(strcmp(input, "ALGORITHM") == 0) {
    printf("CONTEST");
  }
    
  return 0;
}