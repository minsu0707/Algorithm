#include <stdio.h>
#include <string.h>

int main(void) {

  char schoolname[5];

  scanf("%s", schoolname);

  if(strcmp(schoolname, "NLCS") == 0) {

    printf("North London Collegiate School");
    
  }
    
  else if(strcmp(schoolname, "BHA") == 0) {

    printf("Branksome Hall Asia");
  }
    
  else if(strcmp(schoolname, "KIS") == 0) {

    printf("Korea International School");
  }

  else if(strcmp(schoolname, "SJA") == 0) {

    printf("St. Johnsbury Academy");
  }
  
  return 0;
}