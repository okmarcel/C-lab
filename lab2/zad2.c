#include <stdio.h>
#include <math.h>

int main()
{
    int n, count = 0;

    scanf("%d", &n);

    for (int i = 2; i <= sqrt((double)n); i++)
    {
        if (n%i == 0)
        {
            count++;
            printf("%d\n", i);
            if (n/i != i) printf("%d\n", n/i);
        }
    }
    
    if (count == 0) printf("liczba pierwsza\n");

    return 0;
}