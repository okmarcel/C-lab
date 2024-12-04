#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t czas;
    srand( (unsigned int)time(&czas) );

    int najmniejsza, najwieksza, los;
    float srednia = 0.0;

    for (int i = 0; i < 30; i++)
    {
        los = (rand()%(98))-11;
        // printf("los: %d\n", los);
        if (i == 0)
        {
            najmniejsza = los;
            najwieksza = los;
        }
        else
        {
            if (los < najmniejsza) najmniejsza = los;
            else if (los > najwieksza) najwieksza = los;
        }
        srednia += (float)los;
    }
    srednia = srednia/30.0;

    printf("najmniejsza wylosowana: %d\n", najmniejsza);
    printf("najwieksza wylosowana: %d\n", najwieksza);
    printf("średnia z wylosowanych: %f\n", srednia);

    return 0;
}