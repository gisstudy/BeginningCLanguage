#include <stdio.h>

int main()
{
    int in_num, out_num;
    scanf("%d", &in_num);

    int digit = in_num % 16;
    int tens = in_num / 16;

    out_num = tens * 10 + digit;
    printf("%d\n", out_num);

    return 0;
}