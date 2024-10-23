#include <stdio.h>
#include <string.h>

int count_zero(int N, int M) {
    int count = 0;
    char num_str[12];
    
    for (int i = N; i <= M; i++) {
        sprintf(num_str, "%d", i);
        for (int j = 0; j < strlen(num_str); j++) {
            if (num_str[j] == '0') {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    int T;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        int N, M;
        scanf("%d %d", &N, &M);
        printf("%d\n", count_zero(N, M));
    }
    
    return 0;
}
