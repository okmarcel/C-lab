#include <stdio.h>

int main()
{
    int ilosc = 0;
    int i = -15;

    printf("Liczby podzielne przez 3 ale nie 7 od -15 do 131:\n");
    while (i < 131)
    {
        if (i%7 != 0)
        {
            printf("%d\n", i);
            ilosc++;
        }
        i += 3;
    }
    printf("Tych liczb jest %d", ilosc);

    return 0;
}