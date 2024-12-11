#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t czas;
    srand((unsigned int)time(&czas));

    int n = rand()%200;
    float tab[n];
    
    for (int i = 0; i < n; i++)
    {
        tab[i] = (float)((-100.0) + ((float)rand()/RAND_MAX) * 200.0);
        printf("A[%d] = %6.2f\n", i, tab[i]);
    }

    float pom = tab[n-1];
    for (int i = n-1; i >= 0; i--)
    {
        tab[i+1] = tab[i];
    }
    tab[0] = pom;

    printf("\n\nPo zamiane:\n");
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = %6.2f\n", i, tab[i]);
    }

    return 0;
}