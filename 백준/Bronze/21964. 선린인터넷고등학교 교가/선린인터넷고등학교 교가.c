#include <stdio.h>

int main() {
    
    int N;
    char s[100001];
    
    scanf("%d %s", &N, s);
    for(int i=N-5; i<N; i++) {
        printf("%c", s[i]);
    }
    
    return 0;
}