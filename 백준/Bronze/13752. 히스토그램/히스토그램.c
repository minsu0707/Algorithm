#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    
    for(int i=0; i<n; i++) {
        int num;
        scanf("%d", &num);
        for (int j=0; j<num; j++) {
            printf("=");
        }
        printf("\n");
    }
    
    return 0;
}