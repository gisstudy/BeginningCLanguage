#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int smallest, medium, largest;

    if (a <= b && a <= c)
    {
        smallest = a;
        medium = b <= c ? b : c;
        largest = b <= c ? c : b;
    }
    else if (b <= a && b <= c)
    {
        smallest = b;
        medium = a <= c ? a : c;
        largest = a <= c ? c : a;
    }
    else if (c <= a && c <= b)
    {
        smallest = c;
        medium = a <= b ? a : b;
        largest = a <= b ? b : a;
    }

    printf("%d->%d->%d\n", smallest, medium, largest);

    return 0;
}