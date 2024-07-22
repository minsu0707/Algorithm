#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        char a[50];
        scanf("%s", a);
        
        if(strcmp(a, "Algorithm") == 0) {
            printf("204\n");
        } else if(strcmp(a, "DataAnalysis") == 0) {
            printf("207\n");
        } else if(strcmp(a, "ArtificialIntelligence") == 0) {
            printf("302\n");
        } else if(strcmp(a, "CyberSecurity") == 0) {
            printf("B101\n");
        } else if(strcmp(a, "Network") == 0) {
            printf("303\n");
        } else if(strcmp(a, "Startup") == 0) {
            printf("501\n");
        } else if(strcmp(a, "TestStrategy") == 0) {
            printf("105\n");
        }
    }

    return 0;
}
