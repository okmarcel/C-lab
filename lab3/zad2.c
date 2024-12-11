#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t czas;
    srand((unsigned int)time(&czas));

    int n = rand()%199 + 1;
    int maks = -100, indeks;
    int tab[n];

    for (int i = 0; i < n; i++)
    {
        int w = rand()%201 - 100;

        if (w > maks)
        {
            maks = w;
            indeks = i;
        }

        tab[i] = w;
        printf("element[%d] = %+3d\n", i, w);
    }
    
    printf("Maksymalny element to %d, wystepuje pod indeksem %d", maks, indeks);

    return 0;
}