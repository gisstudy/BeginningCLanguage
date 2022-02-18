#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x = 1, y;
    int found = 0;
    for (; x * x < n; x++)
    {
        for (y = x + 1; y * y < n; y++)
        {
            if (x * x + y * y == n)
            {
                printf("%d %d\n", x, y);
                found = 1;
                break;
            }
        }
    }
    if (!found)
    {
        printf("No Solution\n");
    }

    return 0;
}