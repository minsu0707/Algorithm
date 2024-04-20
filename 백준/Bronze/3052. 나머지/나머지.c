#include <stdio.h>

int arr[42];

int main(void) {

  int n;
  int ans = 0;

  for(int i = 0; i < 10; i++) {
      scanf("%d", &n);
      arr[n%42] = 1;
    }

  for(int i = 0; i < 42; i++) {
    ans += arr[i];
  }

  printf("%d", ans);

  return 0;
}