#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int min(float *first, int n)
{
    int it = 0;
    float* minPtr = first;

    for (int i = 0; i < n; i++)
    {
        if (*first < *minPtr)
        {
            it = i;
            minPtr = first;
        }
        first++;
    }

    return it;
}

float* max(float *first, float *last)
{
    float* maxPtr = first;
    first++;

    while (first != last)
    {
        if (*first > *maxPtr) maxPtr = first;
        first++;
    }

    return maxPtr;
}

int main()
{
    time_t czas;
    srand((unsigned int)time(&czas));

    float tab[100];

    for (int i = 0; i < 100; i++)
    {
        tab[i] = rand()/((float)RAND_MAX)*6-3;
    }

    printf("minimalny we wszystkich elementach = %0.4f adres elementu: %p, maksymalny we wszystkich elementach %0.4f adres elementu: %p\n",
            tab[min(&tab[0], 99)], &tab[min(&tab[0], 99)], *max(&tab[0], &tab[99]), max(&tab[0], &tab[99]));
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < 10; i++)
    {
        float* minPtr = &tab[i*10+min(&tab[i*10], 10)];
        float* maxPtr = max(&tab[i*10], &tab[i*10+9]);

        printf("elementy od %2d do %2d min = %0.4f adres %p max = %0.4f adres %p\n",
                i*10, i*10+9, *minPtr, minPtr, *maxPtr, maxPtr);
    }

    return 0;
}