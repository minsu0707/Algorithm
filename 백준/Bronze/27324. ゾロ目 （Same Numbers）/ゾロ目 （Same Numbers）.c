#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    
    (n/10 == n % 10)? printf("1") : printf("0");
    
    return 0;
}