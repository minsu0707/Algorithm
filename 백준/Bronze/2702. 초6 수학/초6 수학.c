#include <stdio.h>

// 최대공약수를 구하는 함수
int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// 최소공배수를 구하는 함수
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int T;
    scanf("%d", &T); // 테스트 케이스의 개수 입력 받기

    while (T--) {
        int a, b;
        scanf("%d %d", &a, &b); // 두 수 입력 받기

        int g = gcd(a, b); // 최대공약수 구하기
        int l = lcm(a, b); // 최소공배수 구하기

        printf("%d %d\n", l, g); // 결과 출력
    }

    return 0;
}