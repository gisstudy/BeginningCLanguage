#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int odd = 0;
    int t = n;
    while (t--)
    {
        int num;
        scanf("%d", &num);

        if (num % 2 == 1)
        {
            odd++;
        }
    }

    printf("%d %d", odd, n - odd);

    return 0;
}