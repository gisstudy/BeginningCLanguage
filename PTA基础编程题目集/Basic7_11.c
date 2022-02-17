#include <stdio.h>

int main()
{
    const int BASIC_TON = 15;
    double x = 0;
    double y = 0;

    scanf("%lf", &x);
    
    if (x <= BASIC_TON)
    {
        y = 4 * x / 3.0;
    }
    else
    {
        y = 2.5 * x - 17.5;
    }

    printf("%.2f\n", y);

    return 0;
}