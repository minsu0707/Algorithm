#include <stdio.h>
#include <string.h>

int main() {
    char n[31];

    while (1) {
        scanf("%s", n);

        if (n[0] == '0' && n[1] == '\0') {
            break;
        }

        int remainder = 0;
        for (int i = 0; n[i] != '\0'; i++) {
            remainder = (remainder * 10 + (n[i] - '0')) % 42;
        }

        printf("%s\n", remainder == 0 ? "PREMIADO" : "TENTE NOVAMENTE");
    }

    return 0;
}
