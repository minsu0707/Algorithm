#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

  int N;
  scanf("%d", &N);

  char name[21];

  for(int i=0; i<N; i++) {
    scanf("%s", name); // 이름 입력

    //이름들을 소문자로 변환
    for(int j=0; j< strlen(name); j++) {
      name[j] = tolower(name[j]);
    }

    printf("%s\n", name);
  }
  
  return 0;
}