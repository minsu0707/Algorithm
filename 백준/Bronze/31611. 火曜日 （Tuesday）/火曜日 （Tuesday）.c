#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    // 오늘부터 X일 후의 요일을 계산
    int day = (X % 7) + 1; // X일 후의 요일 (일요일부터 1, 월요일부터 2, ..., 토요일부터 7)

    // 화요일이면 1을 출력, 아니면 0을 출력
    if (day == 3)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}






