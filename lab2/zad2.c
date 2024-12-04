#include <stdio.h>
#include <math.h>

int main()
{
    int n, count = 0;

    scanf("%d", &n);

    int dzielniki[n];
    for (int i = 2; i <= sqrt((double)n); i++)
    {
        if (n%i==0)
        {
            dzielniki[count++] = i;
        }
    }
    
    if (count > 0 && n != 1)
    {
        for (int i = 0; i < count; i++)
        {
            printf("%d\n", dzielniki[i]);
            if (n/dzielniki[i] != dzielniki[i]) printf("%d\n", n/dzielniki[i]);
        }
    }
    else printf("liczba pierwsza\n");

    return 0;
}