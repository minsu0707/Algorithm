#include <stdio.h>

int main()
{
    int score[5];
    int sum[2];
    
    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&score[j]);
        }
        sum[i]=6*score[0]+3*score[1]+2*score[2]+1*score[3]+2*score[4];
    }
    for(int i=0;i<2;i++){
        printf("%d ",sum[i]);
    }
    return 0;
}