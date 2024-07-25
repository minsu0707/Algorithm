#include <stdio.h>

int main() {
    int s1, s2;
    scanf("%d %d", &s1, &s2);

    // s1은 첫 번째 절반 동안 해결한 사람 수
    // s2는 전체 대회 동안 해결한 사람 수

    // 첫 번째 절반 동안 해결한 사람 수가 전체 해결한 사람 수의 절반 이상이면 "E" 출력
    // 그렇지 않으면 "H" 출력
    if (s1 * 2 >= s2) {
        printf("E\n");
    } else {
        printf("H\n");
    }

    return 0;
}
