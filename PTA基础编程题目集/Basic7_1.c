#include <stdio.h>

int main()
{
    int height = 0;  // 单位: cm
    scanf("%d", &height);

    double height_meter = height / 100.0;
    double feet = height_meter / 0.3048;

    int foot, inch;
    foot = (int)feet;
    inch = (int)((feet - foot) * 12);

    printf("%d %d", foot, inch);
    return 0;
}