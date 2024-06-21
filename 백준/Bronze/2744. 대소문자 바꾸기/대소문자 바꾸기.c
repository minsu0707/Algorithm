#include <stdio.h>
#include <string.h>

int main() {
    
    char this[201];
    scanf("%s", this);
    
    for(int i=0; i<strlen(this); i++) {
        if(this[i] >= 'A' && this[i] <= 'Z') {
            printf("%c", this[i] + 32);
        }
        else if(this[i] >= 'a' && this[i] <= 'z') {
            printf("%c", this[i] - 32);
        }
    }
    
    return 0;
}