#include <stdio.h> 

int main() {
    
    int n;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
        int num1, num2;
        scanf("%d %d", &num1, &num2);
        printf("Case %d: %d\n", i+1, num1+num2);
    }
    
    return 0;
}