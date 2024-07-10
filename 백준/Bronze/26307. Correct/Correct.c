#include <stdio.h>

int main() {
    
    int hour, min;
    scanf("%d %d", &hour, &min);
    int gen = 540;
    int total = 0;
    
    total = (hour*60) + min;
    
    printf("%d", total - gen);
    
    
    return 0;
}