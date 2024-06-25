#include <stdio.h>

int main() {
    
    long long int N, M;
    scanf("%lld %lld", &N, &M);
    
    if(N > M) {
        printf("%lld", N-M);
    }
    else if(M > N) {
        printf("%lld", M-N);
    }
    
    return 0;
}