#include <stdio.h>

int main(){
    int total = 0, i, tmp;
    for(i = 0; i < 5; i++){
        scanf("%d", &tmp);
        if(tmp < 40){
            tmp = 40;
        }
        total += tmp;
    }
    printf("%d", total/5);
    return 0;
}