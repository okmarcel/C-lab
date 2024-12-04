#include <stdio.h>
int n; //jest inicjalizowana na 0 jako globalna
int main()
{
    
    int zm_1 = 14;
    int zm_3 = 5;
    printf("zmienna n = %d, zmienna zm_3 = %d\n", n, zm_3);
    {
        int zm_2 = 8;
        int zm_3 = -1;
        printf("zmienna n = %d, zmienna zm_2 = %d\n", n, zm_2);


        int n = 11;
        zm_3 = zm_3 -31;
        printf("zmienna zm_1 = %d, zmienna zm_3 = %d\n", zm_1, zm_3);
        zm_1 = 6;
        printf("zmienna zm_1 = %d, zmienna zm_3 = %d, zmienna zm_2 = %d\n", zm_1, zm_3, zm_2);
        printf("zmienna n = %d, zmienna zm_3 = %d\n", n, zm_3);
    }
    zm_3 = zm_3 + 1;
    printf("zmienna n = %d, zmienna zm_3 = %d\n", n, zm_3);
    
    return 0;
}