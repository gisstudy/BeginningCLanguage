#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int y = 0; y <= 100; y++)
    {
        for (int f = 0; f <= 100; f++)
        {
            if ((f * 100 + y - n) == (2 * y * 100 + 2 * f))
            {
                printf("%d.%d\n", y, f);

                return 0;
            }
        }
    }

    printf("No Solution\n");

    return 0;
}