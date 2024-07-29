#include <stdio.h>

int main() {
    int sleep_time, wake_time, sleep_hours;
    
    // 두 개의 입력을 받습니다.
    scanf("%d", &sleep_time);
    scanf("%d", &wake_time);
    
    // 자는 시간과 깨어나는 시간을 비교하여 시간 차이를 계산합니다.
    if (sleep_time <= wake_time) {
        sleep_hours = wake_time - sleep_time;
    } else {
        sleep_hours = (24 - sleep_time) + wake_time;
    }
    
    // 결과를 출력합니다.
    printf("%d\n", sleep_hours);
    
    return 0;
}
