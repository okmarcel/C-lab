#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t time;
    srand(time);

    char a = (char)('A' + rand()%26);

    for (int i = 65; i <= (int)a; i++)
    {
        for (int j = 65; j < a-i+65; j++)
        {
            printf(" ");
        }
        for (int j = i; j >= 65; j--)
        {
            printf("%c", (char)j);
        }
        for (int j = 66; j < i+1; j++)
        {
            printf("%c", (char)j);
        }
        printf("\n");
    }

    return 0;
}