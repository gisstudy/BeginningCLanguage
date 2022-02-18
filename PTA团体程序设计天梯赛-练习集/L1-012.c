#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int result = 1;
    int t = n;
    while (t--)
    {
        result <<= 1;
    }
    printf("2^%d = %d\n", n, result);

    return 0;
}