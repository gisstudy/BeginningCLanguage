#include <stdio.h>

double a3, a2, a1, a0;

double f(double x)
{
    return a3 * x * x * x + a2 * x * x + a1 * x + a0;
}

double abs(double x)
{
    return x > 0 ? x : -x;
}

int main()
{
    double a, b;
    scanf("%lf %lf %lf %lf %lf %lf", &a3, &a2, &a1, &a0, &a, &b);

    const double TOLERANCE = 1E-6;

    double root = a - 1;
    while(b - a > TOLERANCE)
    {
        double fa = f(a), fb = f(b), mid = (a + b) / 2;

        if (abs(fa) < TOLERANCE)
        {
            root = a;
            break;
        }

        if (abs(fb) < TOLERANCE)
        {
            root = b;
            break;
        }

        if (fa * fb < 0)
        {
            double fm = f(mid);

            if (abs(fm) < TOLERANCE)
            {
                root = mid;
                break;
            }

            if (fa * fm > 0)
            {
                a = mid;
            }
            else if (fb * fm > 0)
            {
                b = mid;
            }
        }
    }

    if (root == a - 1)
    {
        root = (a + b) / 2.0;
    }
    printf("%.2f\n", root);

    return 0;
}