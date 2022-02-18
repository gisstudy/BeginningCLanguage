#include <stdio.h>

int main()
{
    int today = 0;
    scanf("%d", &today);

    const int TOTAL_DAY = 7;
    int index = (today + 2) % TOTAL_DAY;
    int day_after_tomorrow = index == 0 ? TOTAL_DAY : index;

    printf("%d", day_after_tomorrow);

    return 0;
}