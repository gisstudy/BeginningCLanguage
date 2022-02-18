#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    int t = 0;
    int tortoise_distance = 0;
    int rabbit_distance = 0;
    int rabbit_take_a_rest_minute = 0;

    while (t < T)
    {
        t++;

        tortoise_distance += 3;
        
        if (rabbit_take_a_rest_minute)
        {
            rabbit_take_a_rest_minute--;
        }
        else
        {
            rabbit_distance += 9;
        }

        if (rabbit_take_a_rest_minute == 0 && t % 10 == 0)
        {
            if (rabbit_distance > tortoise_distance) rabbit_take_a_rest_minute = 30;
        }
    }

    if (tortoise_distance > rabbit_distance) printf("@_@ %d", tortoise_distance);
    if (tortoise_distance < rabbit_distance) printf("^_^ %d", rabbit_distance);
    if (tortoise_distance == rabbit_distance) printf("-_- %d", tortoise_distance);

    return 0;
}