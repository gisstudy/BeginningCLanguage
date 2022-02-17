#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d", &a);

    int MAX_DIGIT = a + 3;
    int count = 0;
    for (b = a; b <= MAX_DIGIT; b++)
    {
        for (c = a; c <= MAX_DIGIT; c++)
        {
            for (d = a; d <= MAX_DIGIT; d++)
            {
                if (b != c && b != d && c != d)
                {
                    printf("%d%d%d", b, c, d);
                    count++;
                    if (count % 6 == 0)
                    {
                        printf("\n");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
    }

    return 0;
}