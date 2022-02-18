#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int sum = 0;
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        sum += factorial;
    }

    printf("%d", sum);

    return 0;
}