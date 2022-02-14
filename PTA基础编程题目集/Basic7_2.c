#include <stdio.h>

// start_time = 130, pass_time = -60 => answer = 030;
// start_time = 130, pass_time = -30 => answer = 100;

int main()
{
    int start_time, pass_minute;
    scanf("%d%d", &start_time, &pass_minute);

    int start_hour = start_time / 100;
    int start_minute = start_time % 100;
    int begin_minute = start_hour * 60 + start_minute;  // 从0:00起经过的分钟数

    int end_minute = begin_minute + pass_minute;
    int stop_hour = end_minute / 60;
    int stop_minute = end_minute % 60;
    printf("%d%02d", stop_hour, stop_minute);

    return 0;
}