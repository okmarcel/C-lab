#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t czas;
    srand((unsigned int)time(&czas));

    long long n;
    int tab[10] = {0};

    printf("Podaj liczbe losowan: ");
    scanf("%lld", &n);

    for (long long i = 0; i < n; i++)
    {
        float los = (float)(10.000) + ((float)rand()/RAND_MAX) * (19.9999-10.000);
        tab[(int)(los-10)]++;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Przedzial [%d, %d): %d punktow.\n", i+10, i+11, tab[i]);
    }

    return 0;
}