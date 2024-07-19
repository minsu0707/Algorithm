#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    int total = 0;
    
    for(int i=0; i <n; i++) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);
    
        total = A * (C - 1) + B;
        printf("%d\n", total);
    }
    
    return 0;
}