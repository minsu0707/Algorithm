#include <stdio.h>

int main() {
    int times;
    int allTime = 0;
    for(int i=0; i<4; i++) {
        scanf("%d", &times);
        allTime += times;
    }
    printf("%d\n%d", allTime/60, allTime%60);
    
    return 0;
}