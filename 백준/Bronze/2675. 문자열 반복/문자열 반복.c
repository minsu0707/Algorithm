#include <stdio.h>
#include <string.h>

int main() {

  int N, a;
  char S[21];

  scanf("%d", &N);

 while(N--) {
    scanf("%d %s", &a, S);

    for(int i=0; i < strlen(S); i++) {
      for(int j=0; j<a; j++) {
         printf("%c", S[i]); 
      }
    }
    printf("\n");
  }

  return 0;
}
