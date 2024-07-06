#include <stdio.h>

int main() {
    
    int N;
    int total = 0;
    while(1) {
     scanf("%d", &N);
    
        if(N == 0) {
            return 0;
        }
    
        for(int i=0; i<N; i++) {
            total += N - i;
        }
    
        printf("%d\n", total);
        total = 0;
    }
    
    return 0;
}