#include <stdio.h>

int main()
{
    double n, sum = 0.0, i = 1.0;

    scanf("%lf", &n);

    while (sum <= n)
    {
        sum += 1.0/i;
        i += 1;
    }

    int licz = i-1;

    printf("%d elementow Suma = %0.10lf", licz, sum);

    return 0;
}