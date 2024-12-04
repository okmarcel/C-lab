#include <stdio.h>

void wyplacKwote(int k)
{
    int i20 = 0, i10 = 0, i5 = 0;
    while (k >= 20)
    {
        k -= 20;
        i20++;
    }
    while (k >= 10)
    {
        k -= 10;
        i10++;
    }
    while (k >= 5)
    {
        k -= 5;
        i5++;
    }
    printf("%d*20 + %d*10 + %d*5\n", i20, i10, i5);
    
    return ;
}

int main()
{
    int kwota;

    printf("Wprowadź kwotę : ");
    scanf("%d", &kwota);
    for (int i = 0; i < 2; i++)
    {
        if (kwota%5 == 0)
        {
            break;
        }
        else
        {
            printf("Kwota musi być podzielna przez 5.\n");
            scanf("%d", &kwota);
        }
    }
    if (kwota%5 != 0)
    {
        printf("koniec programu.\n");
        return 1;
    }
    else
    {
        wyplacKwote(kwota);
    }

    return 0;
}