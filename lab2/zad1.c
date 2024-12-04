#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t time;
    srand(time);
    int n = (rand()%9)+1;

    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf(" ");
        }
        for (int j = n; j > n-i; j--)
        {
            printf("%d", j);
        }
        printf(" ");
        for (int j = n-i; j >= 0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}