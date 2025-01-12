#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float* where(float *first, int len)
{
    float a = 10.0;
    float* min = &a;
    first++;

    for (int i = 0; i < len-1; i++)
    {
        if (*first > 0 && *first < *min) min = first;
        first++;
    }
    return (min == &a ? NULL : min);
}

int main()
{
    time_t czas;
    srand((unsigned int)time(&czas));

    int n;
    scanf("%d", &n);

    float tab[n];
    float* tabPtr = tab;
    
    for (int i = 0; i < n; i++)
    {
        *tabPtr = rand()/((float)RAND_MAX)*20-10;
        printf("tab[%d] = %f, adres elementu: %p\n", i, *tabPtr, tabPtr);
        tabPtr++;
    }

    float* minPtr = where(tab, n);

    if (minPtr != NULL)
    {
        tabPtr = tab;
        int indeks = 0;

        while (tabPtr != minPtr)
        {
            tabPtr++;
            indeks++;
        }
        
        printf("\nnajmniejszy element dodatni: %f, adres: %p, indeks w tablicy: %d", *minPtr, minPtr, indeks);
    }
    else printf("nie ma w tablicy dodatnich elementow\n");

    return 0;
}