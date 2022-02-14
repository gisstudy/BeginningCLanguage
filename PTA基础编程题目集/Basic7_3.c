#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);

    int hundreds = num / 100;
    int tens = (num % 100) / 10;
    int digits = (num % 100) % 10;

    int ans = digits * 100 + tens * 10 + hundreds;
    printf("%d", ans);

    return 0;
}