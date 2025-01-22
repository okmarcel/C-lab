#include <stdio.h>

int rFib(int n, int g, int* l)
{
    if (n <= 1)
    {
        printf("%d, Zwracam f(%d), l=%d\n", g++, n, *l);
        *l += 1;
        return n;
    }
    else
    {
        printf("%d, Obliczam f(%d)=f(%d)+f(%d), l=%d\n", g++, n, n-1, n-2, *l);
        *l += 1;
        return rFib(n-1, g, l)+rFib(n-2, g, l);
    }
}

int main()
{
    int n, g = 0, l = 1;
    scanf("%d", &n);

    printf("\nrFibonacci (%d) = %d", n, rFib(n, g, &l));

    return 0;
}