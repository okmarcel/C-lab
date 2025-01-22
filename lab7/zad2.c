#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

void up_2(char* tekst_1, char* tekst_2)
{
    int i = 0;
    while (strstr(tekst_1, tekst_2))
    {
        i++;
        if (i%2 == 0)
        {
            tekst_1 = strstr(tekst_1, tekst_2);
            for (int j = 0; j < 3; j++)
            {
                *tekst_1 = (char)toupper(*tekst_1);
                tekst_1++;
            }
        }
        else tekst_1 = strstr(tekst_1, tekst_2) + strlen(tekst_2);
    }
}

int main()
{
    time_t czas;
    srand((unsigned int)time(&czas));

    int n;
    scanf("%d", &n);

    char S_1[n+1];
    S_1[n] = '\0';
    char S_2[4];
    S_2[3] = '\0';

    for (int i = 0; i < n; i++)
    {
        S_1[i] = 'a' + rand()%10;
    }
    char ch = 'a' + rand()%10;
    for (int i = 0; i < 3; i++)
    {
        S_2[i] = ch;
    }

    printf("S_1 --> %s\n", S_1);
    printf("S_2 --> %s\n", S_2);

    up_2(S_1, S_2);

    printf("S_1 po wywolaniu fukcji up_2 --> %s", S_1);

    return 0;
}