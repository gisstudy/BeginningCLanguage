#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (b == c)
    {
        printf("A\n");
    }
    else if (a == c)
    {
        printf("B\n");
    }
    else
    {
        printf("C\n");
    }

    return 0;
}