#include <stdio.h>

int main() {
    int case_number = 1;
    while (1) {
        int N;
        scanf("%d", &N);

        if (N == 0)
            break;

        // 배열을 입력받고 그대로 출력
        int arr[N];
      
        for (int i = 0; i < N; i++) {
            scanf("%d", arr);
        }

        // 정렬 없이 입력받은 배열을 그대로 출력
        printf("Case %d: Sorting... done!\n", case_number++);
    }

    return 0;
}