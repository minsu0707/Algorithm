#include <stdio.h>

int main() {
    char first_letter;

    // 첫 번째 글자 입력 받기
    scanf("%c", &first_letter);

    // 민재가 생각하는 동아리의 전체 이름 출력
    switch (first_letter) {
        case 'M':
            printf("MatKor\n");
            break;
        case 'W':
            printf("WiCys\n");
            break;
        case 'C':
            printf("CyKor\n");
            break;
        case 'A':
            printf("AlKor\n");
            break;
        case '$':
            printf("$clear\n");
            break;
        
    }

    return 0;
}
