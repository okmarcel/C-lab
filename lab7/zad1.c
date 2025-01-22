#include <stdio.h>

void razem(int *f_1, int *l_1, int *f_2, int *l_2, int *f)
{
    while (f_1 != l_1 && f_2 != l_2)
    {
        if (*f_1 < *f_2)
        {
            *f = *f_1;
            f_1++;
        }
        else
        {
            *f = *f_2;
            f_2++;
        }
        f++;
    }
    while (f_1 != l_1)
    {
        *f = *f_1;
        f_1++;
        f++;
    }
    while (f_2 != l_2)
    {
        *f = *f_2;
        f_2++;
        f++;
    }
}

int main()
{
    int tab1[] = {1,12,13,14,22};
    int tab2[] = {3,4,13,45,54,55,56,66};

    int len1 = sizeof(tab1)/sizeof(*tab1);
    int len2 = sizeof(tab2)/sizeof(*tab2);
    int tab[len1+len2];

    razem(tab1, tab1+len1, tab2, tab2+len2, tab);

    printf("tablica result -> %d", tab[0]);
    for (int i = 1; i < len1+len2; i++)
    {
        printf(",%d", tab[i]);
    }

    return 0;
}