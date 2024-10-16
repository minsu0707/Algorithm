#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    int memo[1000001] = {0};
    for(int i=2; i<=n; i++) {
        memo[i] = memo[i-1] + 1;
        if(i % 2 == 0) {
            if(memo[i] > memo[i/2] + 1) memo[i] = memo[i/2] + 1;
        }
        if(i % 3 == 0) {
            if(memo[i] > memo[i/3] + 1) memo[i] = memo[i/3] + 1;
        }
    }

    printf("%d", memo[n]);
    
    return 0;
}