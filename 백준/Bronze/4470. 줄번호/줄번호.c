#include <stdio.h>
#include <string.h>

int main() {
  int n, i;
  char text[1000];
  char arr[1000];

  scanf("%d", &n);

  fgets(arr, sizeof(arr), stdin);

  for (i = 0; i < n; i++) {
    fgets(text, sizeof(text), stdin);
    printf("%d. ", i+1);
    printf("%s", text);
  }

  return 0;
}