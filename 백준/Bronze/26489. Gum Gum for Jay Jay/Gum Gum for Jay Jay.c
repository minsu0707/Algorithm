#include <stdio.h>

int main() {
    char line[256];
    int line_count = 0;

    // 표준 입력에서 줄을 읽고 줄 수를 셉니다.
    while (fgets(line, sizeof(line), stdin)) {
        line_count++;
    }

    // 총 줄 수를 출력합니다.
    printf("%d\n", line_count);

    return 0;
}