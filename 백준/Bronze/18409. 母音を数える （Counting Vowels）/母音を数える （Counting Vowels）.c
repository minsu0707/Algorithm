#include <stdio.h>

int main(void) {

  char text[51];
  int N;
  int count = 0;
  
  scanf("%d", &N);

  scanf("%s", text);
    
  for(int i=0; i<N; i++) {

    char current_lengh = text[i];
    
    if(current_lengh == 'a' || current_lengh == 'e' || current_lengh == 'i' || current_lengh == 'o' || current_lengh == 'u') {
      count++;
    }
  }
  
  printf("%d", count);
  
  return 0;
}