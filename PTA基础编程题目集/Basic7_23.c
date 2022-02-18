#include <stdio.h>

void read_digit(int num)
{
    char a = 'a';
    printf("%c", num + a);

    // switch (num)
    // {
    //     case 0:
    //         printf("零");
    //         break;
    //     case 1:
    //         printf("壹");
    //         break;
    //     case 2:
    //         printf("贰");
    //         break;
    //     case 3:
    //         printf("叁");
    //         break;
    //     case 4:
    //         printf("肆");
    //         break;
    //     case 5:
    //         printf("伍");
    //         break;
    //     case 6:
    //         printf("陆");
    //         break;
    //     case 7:
    //         printf("柒");
    //         break;
    //     case 8:
    //         printf("捌");
    //         break;
    //     case 9:
    //         printf("玖");
    //         break;
    // }
}

void read_weight(int weight)
{
    switch (weight)
    {
        case 10:
        case 100000:
            // printf("拾");
            printf("S");
            break;
        case 100:
        case 1000000:
            // printf("佰");
            printf("B");
            break;
        case 1000:
        case 10000000:
            // printf("千");
            printf("Q");
            break;
        case 10000:
            // printf("万");
            printf("W");
            break;
        case 100000000:
            // printf("亿");
            printf("Y");
            break;
    }
}

int main()
{

    int num;
    scanf("%d", &num);

    if (num == 0)
    {
        read_digit(0);  // test case: 0
        return 0;
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

        if (t != 0)
        {
            read_digit(t);
            read_weight(weight);
        }
        else if (t == 0 && weight == 10000)
        {
            read_weight(weight);  // test case: 60200150
        }

        num %= weight;
        weight /= 10;

        if (weight > 0)
        {
            if (t == 0 && num / weight != 0)
            {
                read_digit(0);
            }
        }
    }

    return 0;
}