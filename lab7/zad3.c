#include <stdio.h>
#include <string.h>

void tabswap(int* v1, int* v2)
{
    int tmp = *v1;
    *v1 = *v2;
    *v2 = tmp;
}

int main(int argc, char const *argv[])
{
    int kolejnosc[] = {1, 2, 3};

    if (argc < 4)
    {
        printf("blad - za malo argumentow");
        return 0;
    }

    if (strcmp(argv[kolejnosc[0]], argv[kolejnosc[1]]) > 0) tabswap(&kolejnosc[0], &kolejnosc[1]);
    if (strcmp(argv[kolejnosc[1]], argv[kolejnosc[2]]) > 0) tabswap(&kolejnosc[1], &kolejnosc[2]);
    if (strcmp(argv[kolejnosc[0]], argv[kolejnosc[1]]) > 0) tabswap(&kolejnosc[0], &kolejnosc[1]);

    for (int i = 0; i < 3; i++)
    {
        printf("%s ", argv[kolejnosc[i]]);
    }

    return 0;
}