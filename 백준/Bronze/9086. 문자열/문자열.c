#include <stdio.h>
#include <string.h>

int main() {
    
    char str[1000] = "";
    char first, last;
    int n, i, len = 0;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
        scanf("%s", str);
        len = strlen(str);
        
        first = str[0];
        last = str[len-1];
        
        printf("%c%c\n", first, last);
    }
    
    return 0;
}