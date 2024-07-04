#include <stdio.h>

int main() {
    
    int N;
    char *label = "WelcomeToSMUPC";
    int length = 14;
    
    scanf("%d", &N);
    
    printf("%c", label[(N-1) % length]);
    
    return 0;
}