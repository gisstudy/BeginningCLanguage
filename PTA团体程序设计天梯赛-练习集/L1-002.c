#include <stdio.h>

int main()
{
    int n;
    char c;
    scanf("%d %c", &n, &c);

    int rows = 1, count = 1;
    while (count + 2 * (rows + 2) <= n)
    {
        rows += 2;
        count += 2 * rows; 
    }

    int upper = rows, space = 0;
    while (upper >= 1)
    {
        for (int i = 0; i < space; i++) printf(" ");
        for (int i = rows; i > space * 2; i--) printf("%c", c);
        printf("\n");
        space++;
        upper -= 2;
    }

    space -= 2;
    while (space >= 0)
    {
        for (int i = 0; i < space; i++) printf(" ");
        for (int i = rows; i > space * 2; i--) printf("%c", c);
        space--;
        printf("\n");
    }

    // printf("rows=%d,count=%d,remain=%d", rows, count, n - count);
    printf("%d", n - count);

    return 0;
}