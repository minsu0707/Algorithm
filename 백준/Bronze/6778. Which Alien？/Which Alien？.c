#include <stdio.h>

int main() {
    
    int antenna, eyes;
    scanf("%d %d", &antenna, &eyes);
    
    if(antenna >= 3 && eyes <= 4) printf("TroyMartian\n");
    if(antenna <= 6 && eyes >= 2) printf("VladSaturnian\n");
    if(antenna <= 2 && eyes <= 3) printf("GraemeMercurian");
    else return 0;
    
    return 0;
}