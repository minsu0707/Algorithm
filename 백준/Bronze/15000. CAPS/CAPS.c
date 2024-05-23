#include <stdio.h>

int main() {
    char input[1000001];
    scanf("%s", input);  // 문자열 입력 받기

    // 각 문자를 대문자로 변환
    for (int i = 0; input[i] != '\0'; i++) {
        // 소문자인 경우에만 아스키 코드 값 조정하여 대문자로 변환
        if (input[i] >= 'a' && input[i] <= 'z') {
            input[i] -= 'a' - 'A';
        }
    }

    // 변환된 문자열 출력
    printf("%s\n", input);

    return 0;
}
