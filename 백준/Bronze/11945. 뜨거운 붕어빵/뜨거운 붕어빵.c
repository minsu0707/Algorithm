#include <stdio.h>

int main() {

  int N, M;
  scanf("%d %d", &N, &M);

  char fish[N][M+1]; //문자열 끝을 고려하여 M+1로 설정

  //붕어빵 모양 입력 
  for(int i=0; i<N; i++) {
    scanf("%s", fish[i]);
  }

  //붕어빵 모양 좌우 뒤집기
  for(int i=0; i<N; i++) {
    for(int j=M-1; j>= 0; j--) {
      printf("%c", fish[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}