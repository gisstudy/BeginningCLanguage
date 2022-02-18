#include <stdio.h>

void read(int num)
{
    switch (num)
    {
        case 0:
            printf("ling");
            break;
        case 1:
            printf("yi");
            break;
        case 2:
            printf("er");
            break;
        case 3:
            printf("san");
            break;
        case 4:
            printf("si");
            break;
        case 5:
            printf("wu");
            break;
        case 6:
            printf("liu");
            break;
        case 7:
            printf("qi");
            break;
        case 8:
            printf("ba");
            break;
        case 9:
            printf("jiu");
            break;
    }
}

int main()
{
    int num;
    scanf("%d", &num);

    if (num < 0)
    {
        printf("fu ");
        num *= -1;
    }

    int weight = 1;
    int t = num;
    while (t > 9)
    {
        t /= 10;
        weight *= 10;
    }

    // printf("num = %d, weight = %d, t = %d\n", num, weight, t);

    while (weight > 0)
    {
        t = num / weight;
        read(t);

        num %= weight;
        weight /= 10;

        if (weight > 0)
        {
            printf(" ");
        }
    }

    return 0;
}