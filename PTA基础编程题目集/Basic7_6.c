#include <stdio.h>

int main()
{
    double in1, in4;
    int in2;
    char in3;

    scanf("%lf %d %c %lf", &in1, &in2, &in3, &in4);

    printf("%c %d %.2f %.2f", in3, in2, in1, in4);

    return 0;
}