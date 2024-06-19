#include <stdio.h>
#include <stdbool.h>

bool containsSeven(int number) {
    while (number > 0) {
        if (number % 10 == 7) {
            return true;
        }
        number /= 10;
    }
    return false;
}

int main() {
    int number;
    scanf("%d", &number);

    bool hasSeven = containsSeven(number);
    bool divisibleBySeven = (number % 7 == 0);

    if (hasSeven && divisibleBySeven) {
        printf("3\n");
    } else if (hasSeven) {
        printf("2\n");
    } else if (divisibleBySeven) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
