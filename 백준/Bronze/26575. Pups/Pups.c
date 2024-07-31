#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){ 
        double num1, num2, num3;
        scanf("%lf %lf %lf", &num1, &num2, &num3);
        
        printf("$%.2f\n", num1 * num2 * num3);
    }
    
    return 0;
}