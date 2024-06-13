#include <stdio.h>
#include <stdlib.h>

int main() {

  int N, M;
  scanf("%d %d", &N, &M);

  char *num1 = (char *)malloc((N + 1) * sizeof(char));
  char *num2 = (char *)malloc((M + 1) * sizeof(char));

  scanf("%s", num1);
  scanf("%s", num2);

  long long int total1 = atoll(num1);
  long long int total2 = atoll(num2);

  printf("%lld", total1 * total2);
  
  free(num1);
  free(num2);
  
  return 0;
}