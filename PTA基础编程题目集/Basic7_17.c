#include <stdio.h>

int main()
{
    int n, u, d;
    scanf("%d %d %d", &n, &u, &d);

    int spent_minute = 0;
    int walk_distance = 0;
    while(walk_distance < n)
    {
        spent_minute++;
        if (spent_minute % 2 == 0)
        {
            walk_distance -= d;
        }
        else
        {
            walk_distance += u;
        }
    }

    printf("%d\n", spent_minute);
    return 0;
}