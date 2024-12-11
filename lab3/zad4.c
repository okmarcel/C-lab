#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t czas;
    srand((unsigned int)time(&czas));

    int n, ostatnia = rand()%151, ilosc = 1, ciag = 1, najdluzszy = 1;

    printf("ciag wylosowanych liczb: %d ", ostatnia);
    if (ostatnia != 0)
    { 
        while ((n = rand()%151))
        {
            ilosc++;

            printf("%d ", n);

            if (n >= ostatnia) ciag++;
            else ciag = 1;

            if (ciag > najdluzszy) najdluzszy = ciag;

            ostatnia = n;
        }
        ilosc++;
        printf("0\n");
    }
    
    printf("\nwylosowano %d liczb, najdluzszy ciag niemalejacy ma %d elementow", ilosc, najdluzszy);

    return 0;
}