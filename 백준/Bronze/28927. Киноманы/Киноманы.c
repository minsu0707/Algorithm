#include <stdio.h>

int main() {

    int t1, e1, f1;
    int t2, e2, f2;
    int total1, total2;
    scanf("%d %d %d", &t1, &e1, &f1);
    scanf("%d %d %d", &t2, &e2, &f2);

    total1 = (t1 * 3) + (e1 * 20) + (f1 * 120);
    total2 = (t2 * 3) + (e2 * 20) + (f2 * 120);

    if(total1 > total2){
        printf("Max");
    }
    else if(total1 < total2){
        printf("Mel");
    }
    else if (total1 == total2) {
        printf("Draw");
    }

    return 0;
}